//Задание 1
$("#task_1").click(function() {
    let arr = Array.from({length:10});
for (let i = 0; i < arr.length; i++) {
    arr[i] = Math.round((Math.random() * 10) + 1);
}

console.log(arr);

    let elem = Number(prompt("Введите элемент который может быть массива:"));
    if (arr.includes(elem)) {
        alert("Такой элемент есть!")
    }else{
        alert("Такого элемента нет!")
    }
})

//Задание 2
$("#task_2").click(function() {
    let arr_2 = Array.from({length:10});
    for (let i = 0; i < arr_2.length; i++) {
        if(i === 5){
            arr_2[i] = NaN;
        }else{
            arr_2[i] = Math.round((Math.random() * 10) + 1);
        }
    }
    console.log(arr_2);
    
    if(arr_2.indexOf(NaN) !== -1){
        console.log("indexOf: NaN обнаружен");
    }else{
        console.log("indexOf: NaN не обнаружен");
    }

    if(arr_2.includes(NaN)){
        console.log("includes: NaN обнаружен");
    }else{
        console.log("includes: NaN не обнаружен");
    }
})

//Задание 3
$("#task_3").click(function() {
    const chars = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789';
    let mas_1 = Array.from({length:10});
    let mas_2 = Array.from({length:10});
    let mas_3 = Array.from({length:10});
    for (let i = 0; i < 10; i++) {
        mas_1[i] = chars.charAt(Math.random() * chars.length);
        mas_2[i] = chars.charAt(Math.random() * chars.length);
        mas_3[i] = chars.charAt(Math.random() * chars.length);
    }
    console.log(mas_1);
    console.log(mas_2);
    console.log(mas_3);
    let info = prompt("Введите символ");
    if (mas_1.includes(info)){
        console.log("В массиве mas_1 символ есть!");
    }else{
        console.log("В массиве mas_1 символа нет!");
    }
    if (mas_2.includes(info)){
        console.log("В массиве mas_2 символ есть!");
    }else{
        console.log("В массиве mas_2 символа нет!");
    }
    if (mas_3.includes(info)){
        console.log("В массиве mas_3 символ есть!");
    }else{
        console.log("В массиве mas_3 символа нет!");
    }
})

//Задание 4
$("#task_4").click(function() {
    let example_1 = Math.round(1234**2*23/5+234);
    let example_2 = Math.round(28*765**2/5*43**2);
    let example_3 = Math.round(3734**6-(434**6 + 1024**4)/5);
    let example_4 = Math.round(6543**35-965732);
    let example_5 = Math.round((1000**10+100000**10)/10000);
    console.log("Пример 1: " + example_1);
    console.log("Пример 2: " + example_2);
    console.log("Пример 3: " + example_3);
    console.log("Пример 4: " + example_4);
    console.log("Пример 5: " + example_5);
    
    
})

