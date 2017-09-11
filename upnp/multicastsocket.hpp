#ifndef MULTICAST_SOCKET_HPP
#define MULTICAST_SOCKET_HPP 1

#include "upnpsocket.hpp"

START_DEFINE_UPNP_NAMESPACE

/*! \brief CMulticastSocket provides the mechanism to manage multicast sockets. */
class CMulticastSocket : public CUpnpSocket
{
public :
  /*! Default constructor. */
  CMulticastSocket (QObject* parent = nullptr);

  /*! Destructor. */
  virtual ~CMulticastSocket ();

  /*! Binds to IPV4 address on port multicastPort and join the multicast group.
   * \param multicastAddress: 239.255.255.250
   * \param multicastPort: 1900
   * \return True in case of success.
   */
  bool initialize (QHostAddress multicastAddress, quint16 multicastPort);

  /*! Binds to IPV6 address on port multicastPort and join the multicast group.
   * \param multicastAddress: FF02::C
   * \param multicastPort: 1900
   * \return True in case of success.
   * \remark Actually IPV6 is not really used.
   */
  bool initialize6 (QHostAddress multicastAddress, quint16 multicastPort);

  /*! Joins the multicast group using posix code. This function is not use.
   * It was coded due to an unidentified problem with QT4.
   * \param multicastAddress: The multicast group.
   * \remark This function is not use.
   */
  bool joinMulticastAddress (QHostAddress const & multicastAddress);

private :
  QHostAddress m_joinAddress; //!< Save the join address.
};

} // End namespace

#endif