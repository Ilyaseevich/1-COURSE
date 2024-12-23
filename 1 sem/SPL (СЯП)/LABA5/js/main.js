// ЗАДАНИЕ 1
console.log("ЗАДАНИЕ 1");
let all = document.all;
// console.log(all);

for (var i = 0; i < all.length; i++){
  console.log(i + " "+ all[i].tagName);
}

// ЗАДАНИЕ 2
// Как childNodes, так и children возвращают не стандартный JavaScript массив (со всеми методами и свойствами), а объект, подобный массиву.
console.log("ЗАДАНИЕ 2");
let allsubsidiary = document.body.childNodes;
// Выводит также и text,а в цикле он удаляется автоматически(undefinded)
// console.log(subsidiary);
for (var i = 0; i < allsubsidiary.length; i++){
  console.log(i + " "+ allsubsidiary[i].tagName);
}

// Поэтому для вывода дочерних элементов лучше использовать children
console.log("ЗАДАНИЕ 2.2");
let subsidiary = document.body.children;
for (var i = 0; i < subsidiary.length; i++){
  console.log(i + " "+ subsidiary[i].tagName);
}

// Задание 3. Вывести в окно содержимое первого элемента span:
console.log("ЗАДАНИЕ 3");
console.log("Через коллекцию all: " + all[23].innerText);
console.log("Через частную коллекцию: " + document.getElementsByTagName('span')[0].innerText);
console.log("Через идентификатор элемента: " + document.getElementById('id').innerText);

// ЗАДАНИЕ 4
let td = document.getElementById('tdtable');
td = td.getElementsByTagName('td');
let res = 0;
for (var i = 1; i < td.length; i+=2) {
 res += Number(td[i].innerText);
}
res /= 3;

let averageScore = document.getElementsByTagName('span')[1];
//Можно использовать contentText вместо innerText

averageScore.innerText += " Средний балл: " + res;


document.getElementsByTagName("span")[5].style.color = "green";
