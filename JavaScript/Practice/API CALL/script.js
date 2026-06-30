


let api = `37a97e1b830712c12ec561054067a078`;
async function getWhether(city) {
       try {
              let raw = await fetch(
                     `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${api}`
              );

              let realdata = await raw.json();

              console.log(realdata);

              if (!raw.ok) {
                     throw new Error("city not found , something went wrong");

              }
       }
       catch (err) {
              console.log(err.message);
       }

}

getWhether("Daund");