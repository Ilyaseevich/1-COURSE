function info() {
    let div = document.getElementsByTagName('div')[0];
    let form = document.getElementsByTagName('form')[1];
    let data = "<fieldset>";
    let info = "<span>" + document.forms[0].textarea.value + "</span>";
    info += "<p>Студент " + document.forms[0].surname.value + " специальность " + document.forms[0].list.value + "  курс " + document.forms[0].kurs.value + " должен сдавать следующие  предметы:</p>";
    info += "<ol></ol>";
    data += "<select><option selected disabled>Предметы</option>";
    let a = 0;
    for (var i = 9; i < 14; i++) {
      if (document.forms[0].elements[i].checked) {
        a++;
        if (a <= 3) {
            info += "<li>" +  document.forms[0].elements[i].value + "</li>";
            data += "<option>" + document.forms[0].elements[i].value + "</option>";
        }
        else {
          info += "<p>Выбрать можно только 3 флажка<p>";
        }
      }
    }
    data += "</select>";

    div.innerHTML = info;
    form.innerHTML = data;
}




// let all = document.forms[0].elements;
// console.log(all);
