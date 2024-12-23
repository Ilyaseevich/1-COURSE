// Задание 1
function task1(){
    alert("Вас приветсвует учебный центр");
  let name = prompt("Введите имя");
    alert("Добро пожаловать на наши курсы, " + name);
  let da_net = confirm("Хотите стать Web-дизайнером?");
  if(da_net){
    alert("Учите стили CSS и JavaScript!");
  } else {
    alert("Упускаете время!");
  }
}


// Задание 2
function task2() {
  let elem2 = document.getElementById('task2');
  elem2.innerHTML = "22" + 5 + " " + `</br>` + 22 + "5";

  console.log( 10 + 5);
  console.log( "10" + "5");
  alert("Результатом сложения строки и числа всегда будет строка")
}


// Задание 3
let task3 = () => {
  let x = 17;
  let y = 51;
  let res1 = (35*y - 25*x)/ 5 + 232;
  let res2 = (8 * y / x + 5 * x / y - 43) * 6;

  let elem3 = document.getElementById('task3');
  elem3.innerHTML = res1 + " " + res2 + " " + (res1 % res2);
  alert("Остаток от деления: " + res1 % res2);
}


// Задание 4
function task4() {
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
}


// Задание 5
function task5() {
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
}

//
//
// Задание 6
function task6() {
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
}

// Задание 7
function task7() {
  let dvoika = 0b1011111;
  console.log(dvoika);
  let vosem = 0o77;
  console.log(vosem);
  let shesnad = -0xABC;
  console.log(shesnad);
}

// Задание 8
function task8() {
  try {
    let sos = 52;
    console.log(sas);
  } catch{
      alert("Ошибка");
  }
}



function multiply() {
  let num_1 = prompt("Введите число a:");
  let num_2 = prompt("Введите число b:");
  let arrs = "";

  let table = document.getElementById("multiply_");


  for (let a = 1; a <= num_1; a++) {
     arrs += "<tr>"
    for (let b = 1; b <= num_2; b++) {
      arrs += "<td>" + a*b + "</td>";
    }
    arrs += "</tr>"
  }
table.innerHTML = arrs;
}


function circle() {
  let radius1 = prompt("Введите начальный радиус");
  radius1 = new Number(radius1);
  let radius2 = prompt("Введите конечный радиус");
  radius2 = new Number(radius2);

  let table2 = document.getElementById("S+C");
  let datatable = "<tr> <td>Радиус</td> <td>Площадь круга</td> <td>Длина окружности</td> </tr>";

  do {
    datatable += "<tr> <td>" + radius1 + "</td> <td>" + Math.round(Math.PI*radius1**2) + "</td> <td>" + Math.round(Math.PI*2*radius1) + "</td> </tr>";
    radius1 += 0.3;
  } while (radius1 < radius2);

  table2.innerHTML = datatable;
}

function nummethod() {
  let float = prompt("Введите число с плавающей точкой");
  float = Number(float);
  let int = prompt("Введите целое число");
  int = Number(int);

  let table2 = document.getElementById("numbermethod");
  let data_table2 = "<tr> <td>Число</td> <td>Метод</td> <td>Результат</td> <td>Описание</td> </tr>";
  let switch_ = 0;

  for (let g = 0; g < 2; g++) {
        switch (g) {
        case 0: switch_ = float; break;
        case 1: switch_ = int; break;
    }
      for(let k = 0; k < 4; k++){
        data_table2 += "<tr>";
        switch (k) {
          case 0: data_table2 += "<td>" + switch_ + "</td>" + "<td> toExponential(2) </td>" + "<td>" + switch_.toExponential(2) + "</td>" + "<td> Представляет число в экспоненциальной форме,в скобках указывается сколько цифр после точки следует указывать</td>";break;
          case 1: data_table2 += "<td>" + switch_ + "</td>" + "<td> toFixed(2) </td>" + "<td>" + switch_.toFixed(2) + "</td>" + "<td> Фиксирует колличество цифр после точки </td>";break;
          case 2: data_table2 += "<td>" + switch_ + "</td>" + "<td> toPrecision(2) </td>" + "<td>" + switch_.toPrecision(2) + "</td>" + "<td> Фиксирует колличество цифр до точки и после её </td>";break;
          case 3: data_table2 += "<td>" + switch_ + "</td>" + "<td> toString(16) </td>" + "<td>" + switch_.toString(16) + "</td>" + "<td> Переводит число в разные системы счисления </td>";break;
      }
        data_table2 += "</tr>";
      }
    table2.innerHTML = data_table2;
  }

}
