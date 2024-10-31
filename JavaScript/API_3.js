let url = "https://dog.ceo/api/breeds/image/random";
async function getFact() {

    let response = await axios.get(url);
    return (response.data.message);
}

document.querySelector("button").addEventListener("click", async function() {

    try {

        let result = await getFact();
        document.querySelector("img").setAttribute("src", result);
    }catch(e) {

        console.log(e);
        return "No fact found";
    }
});