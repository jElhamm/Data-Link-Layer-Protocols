# Data Link Layer Protocols

   This repository includes the implementation of various *Data Link Layer Protocols* in the field of computer networking.
   The implemented protocols are Go-Back-N, Selective Repeat Protocol, Stop-and-Wait Protocol (Noisy Channel), and Utopian Simplex Protocol.

## Protocols Implemented

   * [Go-Back-N](Go-Back-N): Go-Back-N is a sliding window protocol that allows the sender to send multiple frames before needing an acknowledgment
    but the receiver only accepts frames in the correct order. If an error is detected in a frame, the receiver discards all subsequent frames until the error is fixed.

   * [Utopian Simplex](Utopian%20Simplex%20Protocol): Utopian Simplex Protocol is a theoretical protocol designed for ideal communication channels where there are no errors in transmission.
   It serves as a benchmark for comparing the performance of other protocols under ideal conditions.

   * [Selective Repeat](Selective%20Repeat%20Protocol): Selective Repeat is a sliding window protocol similar to Go-Back-N but with the ability for the receiver 
   to selectively reject and request retransmission of specific frames. This improves efficiency compared to Go-Back-N by 
   allowing the receiver to advance its window without waiting for the out-of-sequence frames.

   * [Stop-and-Wait (Noisy Channel)](Stop-and-Wait%20Protocol%20(Noisy%20Channel)): Stop-and-Wait is a simple protocol where the sender sends one frame at a time and waits for an acknowledgment from the receiver before sending the next frame. The "Noisy Channel" variant includes error detection and correction mechanisms to handle noisy communication channels.


## Key Features of Data Link Layer Protocols:

   1. Error Detection and Correction: Data link layer protocols use techniques like checksums, CRC (Cyclic Redundancy Check),
   and acknowledgment mechanisms to ensure data integrity.
  
   2. Flow Control: Control mechanisms regulate the flow of data between sender and receiver,
   preventing data loss due to speed mismatches or buffer overflows.
  
   3. Framing: Data is divided into manageable frames with headers and trailers for synchronization, addressing, and error-checking purposes.
  
   4. Sequence Control: Sequencing mechanisms ensure the correct order of frame delivery,
   especially in sliding window protocols like Go-Back-N and Selective Repeat.
  
   5. Efficiency: Protocols like Selective Repeat aim to reduce retransmissions and optimize data throughput by allowing
   the receiver to selectively handle damaged or lost frames.


## References

   * [Data link layer](https://en.wikipedia.org/wiki/Data_link_layer)
   * [Noisy Channels Protocols](https://www.geeksforgeeks.org/noisy-channels-protocols/)
   * [Utopian Simplex Protocol in Computer Network](https://www.geeksforgeeks.org/utopian-simplex-protocol-in-computer-network/)
   * [Difference Between Go-Back-N and Selective Repeat Protocol](https://www.geeksforgeeks.org/difference-between-go-back-n-and-selective-repeat-protocol/#:~:text=The%20Go%2DBack%2DN%20protocol,an%20acknowledgement%20for%20each%20packet.)

## License

   This repository is licensed under the MIT License.
   See the [LICENSE](./LICENSE) file for more details.