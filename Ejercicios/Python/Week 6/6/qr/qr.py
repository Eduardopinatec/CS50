# Generates a QR code

import qrcode

# Generate QR code
img = qrcode.make("https://www.google.com")

# Save as file
img.save("qr.png", "PNG")
