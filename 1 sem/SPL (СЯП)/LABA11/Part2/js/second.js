let flag = false;

$("img").mousedown(function() {
  flag = true;
})

$(document).mousemove(function() {
  if(flag){
    let width = event.clientX + "px";
    $("img").css({"left":width});
  }
})

$(document).mouseup(function() {
  flag = false;
})
