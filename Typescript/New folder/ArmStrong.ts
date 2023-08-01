const isArmstrong = (num: number): boolean => {
    // Convert the number to a string to determine its length
    const numStr = num.toString();
    const n = numStr.length;
  
    // Calculate the sum of the cubes of each digit in the number
    let sum = 0;
    for (let i = 0; i < n; i++) {
      const digit = parseInt(numStr[i]);
      sum += digit ** n;
    }
  
    // Return true if the sum is equal to the original number
    return sum === num;
};

console.log(isArmstrong(153)); // true
console.log(isArmstrong(9474)); // true
console.log(isArmstrong(1634)); // true
console.log(isArmstrong(8208)); // true
console.log(isArmstrong(370)); // true
console.log(isArmstrong(371)); // true
console.log(isArmstrong(407)); // true
console.log(isArmstrong(1633)); // false
console.log(isArmstrong(8209)); // false