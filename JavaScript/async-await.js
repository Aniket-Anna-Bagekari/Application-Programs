function getNum() {

    return new Promise(function(resolve, reject) {

        setTimeout(function() {

            let num = Math.floor(Math.random()*5)+1
            if(num > 3) {

                reject("REJECTED");
            }

            console.log(Math.floor(Math.random()*10)+1);
            resolve();
        }, 1000);
    });
}

async function demo() {

    try {

        await getNum();
        await getNum();
        await getNum();
    } catch(error) {

        console.log(error);
    }
}

console.log(demo());