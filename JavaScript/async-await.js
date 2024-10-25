function getNum() {

    return new Promise(function(resolve, reject) {

        setTimeout(function() {

            console.log(Math.floor(Math.random()*10)+1);
            resolve();
        }, 1000);
    });
}

async function demo() {

    await getNum();
    await getNum();
    getNum();
}

console.log(demo());