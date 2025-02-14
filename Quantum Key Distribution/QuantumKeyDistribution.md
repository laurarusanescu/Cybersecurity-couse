## Basics of Encryption
Encryption is the process of converting plaintext into ciphertext to prevent unauthorized access. It ensures confidentiality, integrity, and authenticity of data.

## Classical Encryption and Key Exchange
Traditional encryption relies on mathematical functions to secure communication. Key exchange is the process of securely sharing cryptographic keys between parties.

## RSA, Discrete Log Diffie-Hellman, Elliptic Curve Diffie-Hellman
- **RSA (Rivest-Shamir-Adleman):** A widely used public-key cryptosystem based on the difficulty of factoring large prime numbers.
- **Discrete Log Diffie-Hellman (DLOG-DH):** A key exchange protocol relying on the difficulty of solving discrete logarithms.
- **Elliptic Curve Diffie-Hellman (ECDH):** A more efficient variant of Diffie-Hellman using elliptic curve cryptography.

## Security of Classical Key Exchange
Classical key exchange protocols are vulnerable to attacks such as:
- Man-in-the-middle (MITM) attacks.
- Brute force and computational attacks.
- Quantum attacks that break RSA and DH using Shor’s algorithm.

## Quantum Key Distribution (QKD)
QKD is a secure method of exchanging cryptographic keys using quantum mechanics principles. It ensures security based on the no-cloning theorem and quantum measurement properties.

## QKD Devices, QKD Networks, RoNaQCI, History of QKD
- **QKD Devices:** Hardware used for quantum key distribution, including photon sources and detectors.
- **QKD Networks:** Large-scale networks enabling secure key exchange using quantum communication.
- **RoNaQCI:** A specific initiative focused on regional and national quantum communication infrastructures.
- **History of QKD:** Introduced in the 1980s, with BB84 being the first QKD protocol.

## Wave Nature of Light, Photon Polarization
- **Wave Nature of Light:** Light exhibits both wave and particle characteristics.
- **Photon Polarization:** The orientation of the electric field of a photon, used in QKD to encode information.

## BB84 Protocol with and without Eavesdropper
- **BB84 Protocol:** A quantum key distribution protocol that uses photon polarization to securely share a cryptographic key.
- **With Eavesdropper:** If an eavesdropper (Eve) intercepts the photons, measurement disturbances reveal their presence.
- **Without Eavesdropper:** Secure key exchange is achieved with minimal error rates.

## One-Time Pad Encryption
A cryptographic technique that provides perfect secrecy when a key is used only once and is as long as the message. It is theoretically unbreakable when implemented correctly.
