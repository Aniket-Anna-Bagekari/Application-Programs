// function Delay(Color, time, nextColor) {

//     setTimeout(function() {

//         document.querySelector("h2").style.color = Color;
//         if(nextColor) {
//             nextColor();
//         }  
//     }, time);
// }

// Delay("red",1000, function() {
   
//     Delay("green",1000, function() {

//         Delay("purple",1000);
//     });
// });

/////////////////////////////////////////////////////////////////////////////////////////

// function savetoDB(data, success, failure) {

//     let intSpeed = Math.floor(Math.random()*10)+1;
//     if(intSpeed > 4) {

//         success();
//     }
//     else {

//         failure();
//     }
// }

// savetoDB("HI", function() {

//     console.log("SAVED");
//     savetoDB("BYE",function() {

//         console.log("SAVED 2");
//         savetoDB("BYE",function() {

//             console.log("SAVED 3");
//         }, function() {
    
//             console.log("NOT SAVED 3");
//         });
//     }, function() {

//         console.log("NOT SAVED 2");
//     });
// }, function() {

//     console.log("NOT SAVED");
// });

/////////////////////////////////////////////////////////////////////////////////////////

function savetoDB(data) {

    return new Promise(function(resolve, reject) {

        let intSpeed = Math.floor(Math.random()*10)+1;
        if(intSpeed > 4) {

            resolve("SAVED");
        }
        else {

            reject("NOT SAVED");
        }
    });
}

savetoDB("HI").then(function(result) {

    console.log("1st Promise resolved");
    console.log(result);

    return savetoDB("BYE");

}).then(function(result) {

    console.log("2nd Promise resolved");
    console.log(result);

}).catch(function(error) {

    console.log("Promise rejected");
    console.log(error);

});