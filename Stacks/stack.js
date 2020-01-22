class Stack {
  constructor() {
    this._data = [];
    this.length = 0;
  }

  push(element) {
    this._data.push(element);
    this.length++;
  }
  top() {
    return this._data[this._data.length - 1];
  }
  pop() {
    if (this.length > 0) {
      this.length--;
    }
    return this._data.splice(-1)[0];
  }
  isEmpty() {
      return this.length == 0;
  }
}

const stack = new Stack();
stack.push(1);
stack.push(14);
stack.push(122);
stack.push(20);
stack.push(20039);
console.log("length", stack.length); // length 5
console.log(stack.top()); // 20039
console.log(stack.pop()); // 20039 removed
console.log("length", stack.length); // length 4
console.log(stack.pop()); // 20 removed
console.log(stack.pop()); // 122 removed
console.log(stack.pop()); // 14 removed
console.log(stack.pop()); // 1 removed
console.log(stack.pop()); // undefined
console.log(stack.isEmpty()); // true