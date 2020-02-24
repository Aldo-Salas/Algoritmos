class Client {
  constructor(Name, Id, Credit, Address) {
    this.Name = Name
    this.Id = Id
    this.Credit = Credit
    this.Address = Address
  }
}

let client1 = new Client("Camilo Valencia", "0000000001", 1000000, "Calle 1, Carrera 1 ciudad bolivar")

console.log(`The client name is: ${client1.Name}`)
console.log(`The client Id is: ${client1.Id}`)
console.log(`The client Credit is: ${client1.Credit}`)
console.log(`The client Address is: ${client1.Address}`)
