let point = 0;

function move(){
  let x = 75 + 100 * Math.cos(point) + 180 + Math.pow(point, 3);
  let y = 75 + 100 * Math.sin(point) + 87;
  point += 0.1;
  $("#image").css({"left": x, "top": y})

  if (point >= 2 * Math.PI) {
    point = 0;
    $("#image").css({"left": "75px", "top": "75px"})
    clearInterval(interval);
    setTimeout(Start_, 1500);
  }
}

function Start_() {
   interval = setInterval(move, 100);
}

Start_();
