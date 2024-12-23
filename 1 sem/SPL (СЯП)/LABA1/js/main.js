// Задание 1
 alert("Вас приветсвует учебный центр");
 let name = prompt("Введите имя");
 alert("Добро пожаловать на наши курсы, " + name);
 let da_net = confirm("Хотите стать Web-дизайнером?");
 if(da_net){
   alert("Учите стили CSS и JavaScript!");
 } else {
   alert("Упускаете время!");
 }

// Задание 2
console.log( 10 + 5);
console.log( "10" + "5");
document.write( "22" + 5 + " ");
document.write( 22 + "5" + " " );
alert("Результатом сложения строки и числа всегда будет строка")

// Задание 3
let x = 17;
let y = 51;
let res1 = (35*y - 25*x)/ 5 + 232;
let res2 = (8 * y / x + 5 * x / y - 43) * 6;
document.write(res1 + " ");
document.write(res2 + " ");
document.write(res1 % res2);
alert("Остаток от деления: " + res1 % res2);


// Задание 4
let task = prompt("Введите число которое меньше 20 или больше 40 и не равно 15 + делится без остатка на 5");
if( (task < 20 || task > 40) && task != 15 && task % 5 == 0 && task != null){
  alert("Правильное значение");
} else {
  alert("Не правильное значение");
}

let task_1 = prompt("Введите число 993 или 52");
if(task_1 == 993 || task_1 == 52){
  alert("Молодец!");
} else {
  alert ("Ты не крутой!");
}

// Задание 5
alert("Сейчас вам нужно ввести число A и B, чтобы A было больше");
let numA = prompt("Введите число A:");
let numB = prompt("Введите число B:");
if (numA > numB) {
  alert("Правильно");
} else if (numA < numB) {
  alert("Число A меньше числа B");
}
else if (numA == numB) {
  alert ("Числа равны");
}
else {
  alert("Вы не следуете условию!");
}

let mexico = confirm("Ты шаришь за 52!!!");
if (mexico) {
  alert("Да здраствует Санкт-Петербург!");
} else {
  alert("Ты не катаешься с этими белыми");
}


// Задание 6
let den = prompt("Какой сегодня день? (Сентябрь 2024, 30 дней)");
den = Number(den);
while(den > 7){
  den -= 7;
}
console.log(den);
switch (den){
  case 1: alert("Сегодня Воскресение"); break;
  case 2: alert("Сегодня Понедельник"); break;
  case 3: alert("Сегодня Вторник"); break;
  case 4: alert("Сегодня Среда"); break;
  case 5: alert("Сегодня Четверг"); break;
  case 6: alert("Сегодня Пятница"); break;
  case 7: alert("Сегодня Суббота"); break;
  default: alert("Неправильно"); break;
}


// Задание 7
let dvoika = 0b1011111;
console.log(dvoika);
let vosem = 0o77;
console.log(vosem);
let shesnad = -0xABC;
console.log(shesnad);

// Задание 8
try {
  let sos = 52;
  console.log(sas);
} catch{
    alert("Ошибка");
}

// НЕ НУЖНО

// let table_ = document.querySelector('#table');
// let arr = [["Число","Метод","Результат", "Описание метода"], [yyy,5,6], [7,8,9]];
// // console.log(arr[2][0]);
//
// table(table_, arr);
//
// function table (table_, arr) {
//   for (var i = 0; i < arr.length; i++) {
//     let tr = document.createElement(`tr`);
//
//     for (var j = 0; j < arr[i].length; j++) {
//       let td = document.createElement(`td`);
//       td.innerHTML = arr[i][j];
//       tr.appendChild(td);
//     }
//     table_.appendChild(tr);
//   }
// }
