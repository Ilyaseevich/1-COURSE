let flag = false;
let object = null;

$(".draggable").mousedown(function(event) {
  flag = true;
  object = $(this);
})

$(document).mousemove(function(event) {
  if (flag && object) {
    let height = event.clientY + "px";
    let width = event.clientX + "px";
    object.css({"top": height, "left": width});
  }
})

$(document).mouseup(function() {
  flag = false;
  object = null;
})
