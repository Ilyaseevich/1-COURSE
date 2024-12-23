let canvas = document.getElementById('canvas').getContext('2d');//возвращает объект, предоставляющий методы и свойства для рисования в элементе <canvas>.
let color = "black";

const width = 540;
const height = 540;
const X_BLock = 30;
const Y_BLock = 30;

// СЕТКА
function clearCanvas() {
  canvas.clearRect(0, 0, width, height);
}

function Draw() {
  canvas.beginPath();
  canvas.font = "14px Arial";
  canvas.strokeStyle = "#ffc264";
  canvas.fillStyle = "black";

  for(let i = 0; i <= width; i += X_BLock){
    canvas.moveTo(i, 0);
    canvas.lineTo(i, height);
    canvas.fillText((i - width / 2) / X_BLock , i + 2, height / 2 + 12)
  }
  canvas.stroke();

  for(let i = 0; i <= height; i += Y_BLock){
    canvas.moveTo(0, i);
    canvas.lineTo(width, i);
    canvas.fillText(( height / 2 - i) / Y_BLock, width / 2 + 2, i + 12)
  }
  canvas.stroke();
  canvas.closePath();

  // ГЛАВНЫЕ ОСИ
  canvas.beginPath();
  canvas.strokeStyle = "black";
  canvas.moveTo(0, height / 2);
  canvas.lineTo(width, height / 2 );
  canvas.stroke();

  canvas.moveTo(width / 2, 0);
  canvas.lineTo(width / 2, height);
  canvas.stroke();

  canvas.fillStyle = color;
  canvas.closePath();
}

function changeColor() {
  color = $("#spis").attr("value")
}

function first() {
  clearCanvas();
  Draw();
  canvas.beginPath();
  for(let i = 0; i <= width; i += 0.2){
    const x = (i - width / 2) / X_BLock;
    const y = Math.pow(x, 2);

    canvas.fillRect(x * X_BLock + (width / 2), (height / 2) - Y_BLock * y, 3, 3);
  }
  canvas.closePath();
}

function second() {
  clearCanvas();
  Draw();
  canvas.beginPath();
  for(let i = 0; i <= width; i += 0.2){
    const x = (i - width / 2) / X_BLock;
    const y = Math.pow(x, 3);
    canvas.fillRect(x * X_BLock + (width / 2), (height / 2) - Y_BLock * y, 3, 3);
  }
  canvas.closePath();
}

function third() {
  clearCanvas();
  Draw();
  canvas.beginPath();
  for(let i = 0; i <= width; i += 0.2){
    const x = (i - width / 2) / X_BLock;
    const y = Math.sin(x);
    canvas.fillRect(x * X_BLock + (width / 2), (height / 2) - Y_BLock * y, 3, 3);
  }
  canvas.closePath();
}

function four(){
  clearCanvas();
  Draw();
  canvas.restore();
  canvas.beginPath();
  for(let i = 0; i <= width; i += 0.2){
    const x = (i - width / 2) / X_BLock;
    const y = Math.cos(x);
    canvas.fillRect(x * X_BLock + (width / 2), (height / 2) - Y_BLock * y, 3, 3);
  }
  canvas.closePath();
}

Draw();
