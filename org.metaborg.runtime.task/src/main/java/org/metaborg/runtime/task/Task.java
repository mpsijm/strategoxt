package org.metaborg.runtime.task;

import java.util.List;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;

import com.google.common.collect.Lists;

public final class Task {
	private enum Status {
		Unknown, Success, Fail, DependencyFail
	}

	public final IStrategoTerm instruction;
	public final IStrategoList initialDependencies;

	// TODO: move these to task (type) definition, this is wasting space.
	public final boolean isCombinator;
	public final boolean shortCircuit;
	public final boolean executeOnDependenciesFailure;

	private List<IStrategoTerm> results = Lists.newLinkedList();
	private Status status = Status.Unknown;
	private IStrategoTerm message;
	private long time = -1;
	private short evaluations = 0;

	public Task(IStrategoTerm instruction, IStrategoList initialDependencies, boolean isCombinator,
		boolean shortCircuit, boolean executeOnDependenciesFailure) {
		this.instruction = instruction;
		this.initialDependencies = initialDependencies;

		this.isCombinator = isCombinator;
		this.shortCircuit = shortCircuit;
		this.executeOnDependenciesFailure = executeOnDependenciesFailure;
	}

	public Task(Task task) {
		this.instruction = task.instruction;
		this.initialDependencies = task.initialDependencies;

		this.isCombinator = task.isCombinator;
		this.shortCircuit = task.shortCircuit;
		this.executeOnDependenciesFailure = task.executeOnDependenciesFailure;

		this.results = Lists.newLinkedList(task.results);
		this.status = task.status;
		this.message = task.message;
		this.time = task.time;
		this.evaluations = task.evaluations;
	}

	public Iterable<IStrategoTerm> results() {
		return results;
	}

	public boolean hasResults() {
		return !results.isEmpty();
	}

	public void setResults(Iterable<IStrategoTerm> results) {
		this.results = Lists.newLinkedList(results);
		status = Status.Success;
	}

	public void addResults(Iterable<IStrategoTerm> results) {
		for(IStrategoTerm result : results)
			this.results.add(result);
		status = Status.Success;
	}

	public void addResult(IStrategoTerm result) {
		results.add(result);
		status = Status.Success;
	}

	public boolean failed() {
		return status == Status.Fail || status == Status.DependencyFail;
	}

	public void setFailed() {
		status = Status.Fail;
	}

	public boolean dependencyFailed() {
		return status == Status.DependencyFail;
	}

	public void setDependencyFailed() {
		status = Status.DependencyFail;
	}

	public boolean solved() {
		return status != Status.Unknown;
	}

	public void unsolve() {
		results.clear();
		status = Status.Unknown;
	}

	public IStrategoTerm message() {
		return message;
	}

	public void setMessage(IStrategoTerm message) {
		this.message = message;
	}

	public void clearMessage() {
		message = null;
	}

	public long time() {
		return time;
	}

	public void setTime(long time) {
		this.time = time;
	}

	public void addTime(long time) {
		this.time += time;
	}

	public void clearTime() {
		time = -1;
	}

	public short evaluations() {
		return evaluations;
	}

	public void setEvaluations(short evaluations) {
		this.evaluations = evaluations;
	}

	public void addEvaluation() {
		++evaluations;
	}

	public void clearEvaluations() {
		evaluations = 0;
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + ((initialDependencies == null) ? 0 : initialDependencies.hashCode());
		result = prime * result + ((instruction == null) ? 0 : instruction.hashCode());
		return result;
	}

	@Override
	public boolean equals(Object obj) {
		if(this == obj)
			return true;
		if(obj == null)
			return false;
		if(getClass() != obj.getClass())
			return false;
		Task other = (Task) obj;
		if(initialDependencies == null) {
			if(other.initialDependencies != null)
				return false;
		} else if(!initialDependencies.equals(other.initialDependencies))
			return false;
		if(instruction == null) {
			if(other.instruction != null)
				return false;
		} else if(!instruction.equals(other.instruction))
			return false;
		return true;
	}

	@Override
	public String toString() {
		return "Task [instruction=" + instruction + ", isCombinator=" + isCombinator + ", results=" + results
			+ ", status=" + status + ", message=" + message + ", time=" + time + ", evaluations=" + evaluations + "]";
	}
}
