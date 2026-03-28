
public class NewStack {

	private int[] arr;
	private int top;
	private int size;

	public NewStack(int Stacksize) {
		this.size = Stacksize;
		this.arr = new int[Stacksize];
		this.top = -1;
	}

	boolean isEmpty() {
		return top == -1; // Return true if stack is empty
	}

	boolean isFull() {
		return top == size - 1; // Return true if stack is full
	}

//	Add element to stack, handle overflow
	public void push(int data) {
		if (isFull()) {
			System.out.println("Stack Overflow...");
		} else {
			arr[++top] = data;
			System.out.println("Pushed " + data);
			System.out.println("Element Added Succefully...");
		}
	}

//	Remove and return top element, handle underflow
	public int pop() {
		if (isEmpty()) {
			System.out.println("Stack Underflow...");
			return -1;
		} else {
			int data = arr[top--];
			return data;
		}

	}

	public int peek() {
		if (isEmpty()) {
			System.out.println("Stack is empty ");
			return -1;
		} else {
			return arr[top];
		}

	}

	public void display() {
		if(isEmpty()) {
			System.out.println("Stack is empty");
		}
		else {
			System.out.println("Stack Element is display");
			for(int i = top ;i>=0;i--) {
				System.out.println(arr[i]);
			} 
		}
		
		
	}

}
