//ЗАДАНИЕ 1

let x,y,z,c, min, max, indmax, indmin;
x = 6 - (Math.pow(Math.PI, 2)) + 3 * Math.exp(8);
y = 2 * Math.cos(4) + Math.cos(12) + 8 - Math.exp(3);
z = 3 * Math.sin(9) + Math.log(5) + Math.sqrt(2);
c = 2 * Math.tan(5) + 6 - Math.PI +Math.sqrt(12);
let arr = [x, c, z, y];
min = arr[0];
max = arr[0];
for (var i = 0; i < arr.length; i++) {
  if (min > arr[i]) {
  min = arr[i];
  indmin = i;
  }
  if (max < arr[i]) {
    max = arr[i];
    indmax = i;
  }
}
console.log(arr);
console.log(min, indmin);
console.log(max, indmax);

// ЗАДАНИЕ 2
arrs = Array.from("Раз два три 123");
console.log(arrs);
arrS = Array.of(1,5,6,7, "543");
console.log(arrS);

//ЗАДАНИЕ 3
let methods = ["pow", "pop", "push", "shift", "round", "floor", "sort"];

let methodsArray = [];
let methodsMath = [];

for (let i = 0; i < methods.length; i++) {
  if (["pow", "round", "floor"].includes(methods[i])) {
      methodsMath.push(methods[i]);
    }else{
      methodsArray.push(methods[i]);
    }
  };

methodsArray.unshift("unshift");
methodsMath.push("abs");

console.log(methods);
console.log(methodsMath + " " + methodsMath.length );
console.log(methodsArray+ " " + methodsArray.length);

//ЗАДАНИЕ 4
let fio = "Ильясеевич Роман Сергеевич ";
console.log(fio.length);
let fio1 = fio.toUpperCase();
console.log(fio1);
let fio2 = fio.toLowerCase();
console.log(fio2);
fio1 = fio1.concat(fio2);
console.log(fio1);
fio = fio.replace("Ильясеевич Роман Сергеевич","ИРС");
console.log(fio);

//ЗАДАНИЕ 5
function table() {
  let table = document.getElementById("date");
  let data = new Date;

  let element = "<tr><th>Год</th><td>" + data.getFullYear() + "</td></tr>";
  element += "<tr><th>Месяц</th><td>" + (data.getMonth() +  1)  + "</td></tr>";
  element += "<tr><th>День</th><td>" + data.getDate() + "</td></tr>";
  element += "<tr><th>Час</th><td>" + data.getHours() + "</td></tr>";
  element += "<tr><th>Минуты</th><td>" + data.getMinutes() + "</td></tr>";
  element += "<tr><th>Секунды</th><td>" + data.getSeconds() + "</td></tr>";

  table.innerHTML = element;

}
