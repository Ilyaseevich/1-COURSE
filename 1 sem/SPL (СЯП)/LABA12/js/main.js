//ЗАДАНИЕ 1
let map = new Map();
map.set("1", "+375291129915");
map.set("2", "+375295006789");
map.set("3", "+375295278903");
map.set("4", "+375291700934");
map.set("5", "+375291349878");

$(".phone").click(function(){
  let num = prompt("Введите число от 1 до 5");
  confirm("Номер телефона " + num + " : " +  map.get(num));
  console.log("Номер телефона " + num + " : " +  map.get(num));
});

//ЗАДАНИЕ 2
let tast_2 = new Set();
tast_2.add(1);
tast_2.add(3);
tast_2.add(5);

console.log(tast_2.size);

for (let i = 1; i <= 5; i+= 2) {
  console.log("Значение " + i + ": " +  tast_2.has(i));
}

//Задание 3
let proto = {
    name: "Олег",
    surname: "Кизару",
    middlename: "Олегович",
    display: function () {
    console.log(this.name + " " + this.surname + " " + this.middlename);
    }
}

let proto_2 = Object.create(proto);

proto_2.name = "Жан";
proto_2.surname = "Карпович";
proto_2.middlename = " ";

proto.display();
proto_2.display();

//ЗАДАНИЕ 4
$(".reg").click(function() {
  let name = prompt("Введите своё имя: ");
  console.log(name);
  if (name === null || name === "") {
      confirm("Привет, Аноним!");
  }else {
      confirm("Привет, " + name + "!");
  }
})

//ЗАДАНИЕ 5
function click_1(but) {
  let count = 0;
  return function() {
    ++count;
    but.innerHTML = count;
  }
}

let but_1 = document.getElementById('but_1')
but_1.addEventListener('click', click_1(but_1));

function click_2(but) {
  let count = 0;
  return function() {
    count += 2;
    but.innerHTML = count;
  }
}

let but_2 = document.getElementById('but_2')
but_2.addEventListener('click', click_2(but_2));

function click_3(but) {
  let count = 0;
  return function() {
    count += 5;
    but.innerHTML = count;
  }
}

let but_3 = document.getElementById('but_3')
but_3.addEventListener('click', click_3(but_3));

