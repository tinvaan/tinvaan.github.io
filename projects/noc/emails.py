import smtplib;

print "Setting up the server"

server = smtplib.SMTP('smtp.gmail.com', 587);
server.ehlo()
server.starttls()
server.login("harishnavnit@gmail.com", "be_The_Change")

print "Loggeed into server"

msg = "\r\n".join([
    "From: harishnavnit@gmail.com",
    "To: harishnavnit@gmail.com",
    "CC: harrygreenghost@gmail.com",
    "Subject: Just a test",
    "",
    "Let the games begin ! "
])

print "About to send mail"

server.sendmail("harishnavnit@gmail.com", "harishnavnit@gmail.com", msg)
server.quit()

print "Mail sent, closing connection"
