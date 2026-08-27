* {
  box-sizing: border-box;
  margin: 0;
  padding: 0;
}

body {
  font-family: Arial, sans-serif;
  background: #f2f4f8;
  color: #222;
  min-height: 100vh;
}

header {
  background: #123b6d;
  color: white;
  padding: 25px;
  text-align: center;
}

header h1 {
  font-size: 32px;
}

header p {
  margin-top: 5px;
  letter-spacing: 2px;
}

main {
  max-width: 1000px;
  margin: auto;
  padding: 25px;
}

.welcome {
  background: white;
  padding: 25px;
  border-radius: 15px;
  margin-bottom: 25px;
  box-shadow: 0 4px 12px rgba(0,0,0,0.08);
}

.welcome h2 {
  margin-bottom: 10px;
}

#datetime {
  color: #555;
}

.cards {
  display: grid;
  grid-template-columns: repeat(4, 1fr);
  gap: 15px;
  margin-bottom: 25px;
}

.cards button {
  background: white;
  border: none;
  border-radius: 15px;
  padding: 25px 10px;
  font-size: 18px;
  cursor: pointer;
  box-shadow: 0 4px 12px rgba(0,0,0,0.08);
  transition: transform 0.2s;
}

.cards button:hover {
  transform: translateY(-4px);
}

.cards button:first-line {
  font-size: 30px;
}

#content {
  background: white;
  padding: 25px;
  border-radius: 15px;
  min-height: 150px;
  box-shadow: 0 4px 12px rgba(0,0,0,0.08);
}

footer {
  text-align: center;
  padding: 25px;
  color: #666;
}

@media (max-width: 700px) {
  .cards {
    grid-template-columns: repeat(2, 1fr);
  }

  header h1 {
    font-size: 26px;
  }
}

@media (max-width: 400px) {
  .cards {
    grid-template-columns: 1fr;
  }
}
