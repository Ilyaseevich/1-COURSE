$("#span").mouseover(function() {
  $(this).css("color", "red")
})

$("#span").mouseout(function() {
  $(this).css("color", "black")
})

$("#task_2").click(function() {
  if($(this).css("font-size") === "16px"){
    $(this).css("font-size", "20px");
  }else{
    $(this).css("font-size", "16px");
  }
})

$("#img").click(function() {
  if($(this).attr("src") === "https://upload.wikimedia.org/wikipedia/commons/thumb/4/4d/Cat_November_2010-1a.jpg/1200px-Cat_November_2010-1a.jpg"){
    $(this).attr("src", "https://c.pxhere.com/photos/94/f9/cat_kitten_animal_pet_tomcat_tabby_bury_sitting-1090983.jpg!d");
  }else{
    $(this).attr("src", "https://upload.wikimedia.org/wikipedia/commons/thumb/4/4d/Cat_November_2010-1a.jpg/1200px-Cat_November_2010-1a.jpg");
  }
})

$("#task_4").click(function functionName() {
  $(this).html("<img src='https://avatars.mds.yandex.net/get-mpic/5235119/2a0000018c2822954900de62c9b4897cc1bd/orig' id='imgs'>");
  $("#imgs").css({"width":"200px","height":"200px"});
})


$("#task_5").mouseover(function() {
  $(this).css({"width":"300px","height":"300px", "transition":"0.5s"});
})
$("#task_5").mouseout(function() {
  $(this).css({"width":"200px","height":"200px", "transition":"0.5s"});
})

$("#task_6").dblclick(function() {
  if($(this).css("outline") === "rgb(0, 0, 0) none 0px"){
    $(this).css({"width":"300px","outline":"5px dotted red"});
  }else {
    $(this).css("outline", "rgb(0, 0, 0) none 0px");
  }
})
