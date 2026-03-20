// let arr = [1, 2, 3, 4, 5];
// let k = 2; // number of rotations

// for (let i = 0; i < k; i++) {
//   let first = arr[0];

//   // inner loop for shifting
//   for (let j = 0; j < arr.length - 1; j++) {
//     arr[j] = arr[j + 1];
//   }

//   arr[arr.length - 1] = first;
// }

console.log(arr);

let arr = [10, 20, 30, 40, 50];
let k = 2; // number of rotations

for (let i = 0; i < k; i++) {
  let last = arr[arr.length - 1];

  // inner loop for shifting right
  for (let j = arr.length - 1; j > 0; j--) {
    arr[j] = arr[j - 1];
  }

  arr[0] = last;
}

console.log(arr);
