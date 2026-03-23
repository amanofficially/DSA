// let str = "Aman";
// let newStr = "";

// for (let i = str.length - 1; i >= 0; i--) {
//   newStr += str[i];
// }

// console.log(newStr);

// function reverseArray(arr) {
//   let start = 0;
//   let end = arr.length - 1;

//   while (start < end) {
//     let temp = arr[0];
//     arr[start] = arr[end];
//     arr[end] = temp;

//     start++;
//     end--;
//   }

//   return arr;
// }

// console.log(reverseArray([1, 2, 3, 4, 5]));

let str = "Aman";

let newStr = "";

for (let i = 0; i < str.length; i++) {
  newStr += str[i];
}

console.log(newStr);
