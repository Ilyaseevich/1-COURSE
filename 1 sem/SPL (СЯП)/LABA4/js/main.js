//ЗАДАНИЕ 1
// Создать пользовательский объект Gruppa (использовать
// пример, представленный выше). Добавить метод sub_stud (исключить из
// группы k студентов). Создать несколько экземпляров объекта Gruppa (gr2,
// gr3, gr4). Применить методы add_stud и sub_stud к каждому экземпляру.
// Вывести на страницу количество студентов в каждой группе

  function Gruppa(name, students){
    this.name = name;
    this.students = students;

    this.add_stud = function add_stud(k){
    this.students += k;
    }

    this.sub_stud = function sub_stud(k){
      if (this.students > k){
        this.students -= k;
      } else
  {
        document.write("Отрицательным не может быть ")
        this.students -= k;
      }
    }

    this.print = function print(){
      document.write(this.name + " " + this.students + "<br>");
    }
  }

  let gr2 = new Gruppa("gr2", 29);
  let gr3 = new Gruppa("gr3", 30);
  let gr4 = new Gruppa("gr4", 31);

  gr2.add_stud(5);
  gr2.sub_stud(10);
  gr2.print();
  gr3.sub_stud(31);
  gr3.print();
  gr4.add_stud(5);
  gr4.sub_stud(3);
  gr4.print();

//ЗАДАНИЕ 2
// Создать пользовательский объект Студент. Свойства: имя,
// фамилия, физика (оценка), математика, информатика. Методы: вывести свое
// имя и фамилию в окно, рассчитать средний балл и вывести на страницу.
// Создать 3 экземпляра объекта Студент. Вывести информацию о всех
// студентах.
// Добавить какое-нибудь свойство объекту Студент. Задать значение этого
// свойства для всех экземпляров. Вывести информацию о всех студентах на
// страницу.

  function Student(name, surname, physics, mathematics, informatics){
    this.name = name;
    this.surname = surname;
    this.physics = physics;
    this.mathematics = mathematics;
    this.informatics = informatics;

    this.fs = function fs() {
      alert(this.name + " " + this.surname);
    };

    this.score = function score(){
      return (this.physics + this.mathematics + this.informatics) / 3;
    }

    this.info = function info() {
      document.write("Имя: " + this.name + "<br>" +  "Фамилия: " + this.surname +  "<br>" + "Балл: "  + this.score().toFixed(2) + "<br>" );
    }

    this.fullinfo = function fullinfo(){
        document.write("Имя: " + this.name + "<br>" +  "Фамилия: " + this.surname +  "<br>" + "Балл: "  + this.score().toFixed(2) + "<br> Группа: " + this.group + "<br>");
    }
  }

  let student1 = new Student("Артём", "Петушара", 6, 7, 9);
  let student2 = new Student("Влад", "Красава", 9, 10, 10);
  let student3 = new Student("Рома", "как Влад", 10, 10, 10);

  student1.info();
  student2.info();
  student3.info();

  Student.prototype.group = "Группа:";
  student1.group = "Группа 1";
  student2.group = "Группа 2";
  student3.group = "Группа 3";

  student1.fullinfo();
  student2.fullinfo();
  student3.fullinfo();


//ЗАДАНИЕ 3
// Использовать объекты Math, Array и String из лабораторной
// работы №3.
// Delete. Удалить из массива элемент с номером 3, вывести исходный
// массив и полученный.
// In. Проверить, имеется ли у массива 2-й элемент. Проверить наличие
// любого свойства у созданных ранее пользовательских объектов Gruppa и
// Студент.
// Instanceof. Проверить, являются ли созданные объекты объектами Array,
// String, Object.
// Typeof. Создать функцию, которая просто возвращает значение 5. Узнать
// тип всех созданных ранее объектов, включая функцию. Узнать тип всех
// свойств пользовательских объектов Gruppa и Студент


let math = Math.abs(-6);
let arr = [1, 5, 6, 7, 4];
let str = new String("String");

console.log(arr);
delete arr[3];
console.log(arr);

for (let i = 2; i < 4; i++) {
  if (i in arr) {
    console.log("Да имеется")
  }else {
    console.log("Не имеется");
  }
}
console.log("Проверяем, наличие свойства у экземпляра объекта Student: ","surname" in student2);
console.log("Проверяем, наличие свойства у экземпляра объекта Gruppa: ","students" in gr3);

console.log("Относится ли arr к объекту Array?",arr instanceof Array);
console.log("Относится ли arr к объекту Object?",arr instanceof Object);
console.log("Относится ли str к объекту String?",str instanceof String);

function retFive(){
  return 5;
}

console.log("retFive:",typeof retFive);
console.log("math:",typeof math);
console.log("arr:",typeof arr);
console.log("str:",typeof str);

console.log("");
console.log(typeof Gruppa);
console.log(typeof gr2);
console.log(typeof gr2.name);
console.log(typeof gr2.students);

console.log("");
console.log(typeof Student);
console.log(typeof student1);
console.log(typeof student1.name);
console.log(typeof student1.surname);
console.log(typeof student1.group);
console.log(typeof student1.mathematics);
console.log(typeof student1.score);

console.log("");
console.log(typeof student1.sccore);
