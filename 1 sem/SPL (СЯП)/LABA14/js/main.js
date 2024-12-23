$("#task_1").click(function(){
    let data_class = {
        class_9: 10,
        class_10: 7,
        class_11: 13
    }
    console.log(Object.values(data_class));
    let keys = Object.keys(data_class).map(info => data_class[info]);
    console.log(keys);
})

$("#task_2").click(function(){
    let nums = [1, 12, 123, 1234];
    nums.forEach(num => console.log("Nums: " + num));
    let nums_correct = nums.map(num => num.toString().padStart(7, "0").padEnd(10, "0"));
    nums_correct.forEach(c => console.log("Correct nums: " + c));
})

$("#task_3").click(function(){
    let name = "Роман";
    console.log(name);
    let surname = "Ильясеевич";
    console.log(surname);
    let name_length = name.length;
    console.log(name_length);
    let surname_length = surname.length;
    console.log(surname_length);
    name = name.toString().padStart((name_length + 10), "&^*");
    console.log(name);
    surname = surname.toString().padEnd(surname_length + 3, " 17");
    console.log(surname);
})

$("#task_4").click(function(){
    let chars = ['R', 'o', 'm', 'a', 'n'];
    let change_chars = chars.map(c => c.toString().padStart(4, "1") + "    ".padEnd(5, "0"))
    change_chars.forEach(ch => console.log(ch));
})

$("#task_5").click(function(){
    let tree = {
        name_tree: "Дуб",
        height: "2 м",
        width: "50 cm"
    }
    let property = Object.getOwnPropertyDescriptor(tree, "height"); //получаем инфу со свойства
    console.log(property);
})

$("#task_6").click(function(){
    let tree = {
        name_tree: "Берёза",
        height: "2.3 м",
        width: "52 cm"
    }
    Object.defineProperty(tree, 'number', {
        get: function(){
            return 5
        },
        set: function(value) {
            return console.log(value + 5);
        }
    });
    console.log(tree.number);
    tree.number = 400;
})
