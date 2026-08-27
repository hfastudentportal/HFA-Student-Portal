function showMessage(section) {
  const content = document.getElementById("content");

  if (section === "Subjects") {
    content.innerHTML = `
      <h2>📚 Subjects</h2>
      <p>Select a subject to view more information.</p>
      <ul>
        <li>English</li>
        <li>Mathematics</li>
        <li>Science</li>
        <li>Filipino</li>
      </ul>
    `;
  }

  else if (section === "Grades") {
    content.innerHTML = `
      <h2>📊 Grades</h2>
      <p>Your grades will appear here.</p>
    `;
  }

  else if (section === "Schedule") {
    content.innerHTML = `
      <h2>📅 Schedule</h2>
      <p>Your class schedule will appear here.</p>
    `;
  }

  else if (section === "Announcements") {
    content.innerHTML = `
      <h2>🔔 Announcements</h2>
      <p>No new announcements.</p>
    `;
  }
}

function updateDateTime() {
  const now = new Date();

  document.getElementById("datetime").textContent =
    now.toLocaleString();
}

updateDateTime();

setInterval(updateDateTime, 1000);
