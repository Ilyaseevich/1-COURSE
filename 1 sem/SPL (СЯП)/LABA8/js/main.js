let task_1 = document.getElementById('span');

task_1.onmouseover = function OnMouse() {
  task_1.style.color = "red";
}

task_1.onmouseout = function OutMouse() {
  task_1.style.color = "black";
}

let task_2 = document.getElementById('task_2');

task_2.onclick = function click() {
  if (task_2.style.fontSize === "16px") {
      task_2.style.fontSize = "20px";
  }else {
    task_2.style.fontSize = "16px";
  }
}

let task_3 = document.getElementById('img')

task_3.onclick = function Click(){
  console.log(event.srcElement.id);
  if (task_3.src === "https://upload.wikimedia.org/wikipedia/commons/thumb/4/4d/Cat_November_2010-1a.jpg/1200px-Cat_November_2010-1a.jpg") {
    task_3.src = "https://c.pxhere.com/photos/94/f9/cat_kitten_animal_pet_tomcat_tabby_bury_sitting-1090983.jpg!d";
  }else {
    task_3.src = "https://upload.wikimedia.org/wikipedia/commons/thumb/4/4d/Cat_November_2010-1a.jpg/1200px-Cat_November_2010-1a.jpg"
  }
}

let task_4 = document.getElementById('task_4');
let img = "<img src='https://avatars.mds.yandex.net/get-mpic/5235119/2a0000018c2822954900de62c9b4897cc1bd/orig' style='width: 200px; height: 200px; margin-bottom: 15px'>";

task_4.onclick = function transfer() {
  task_4.innerHTML = img;
}

let task_5 = document.getElementById('task_5');

task_5.onmouseover = function Big() {
  task_5.style.width = "300px";
  task_5.style.height = "300px";
}

task_5.onmouseout = function Small() {
  task_5.style.width = "200px";
  task_5.style.height = "200px";
}

let task_6 = document.getElementById('task_6');
task_6.ondblclick = function Double() {
  if (task_6.style.outline === "") {
    task_6.style.width = "300px";
    task_6.style.outline = "5px dotted red";
  }else{
    task_6.style.outline = "";
  }
}
