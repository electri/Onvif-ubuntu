/* WebRemoteDiscoveryBindingProxy.cpp
   Generated by gSOAP 2.8.15 from web.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under ONE of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "WebRemoteDiscoveryBindingProxy.h"

RemoteDiscoveryBindingProxy::RemoteDiscoveryBindingProxy()
{	this->soap = soap_new();
	this->own = true;
	RemoteDiscoveryBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

RemoteDiscoveryBindingProxy::RemoteDiscoveryBindingProxy(struct soap *_soap)
{	this->soap = _soap;
	this->own = false;
	RemoteDiscoveryBindingProxy_init(_soap->imode, _soap->omode);
}

RemoteDiscoveryBindingProxy::RemoteDiscoveryBindingProxy(const char *url)
{	this->soap = soap_new();
	this->own = true;
	RemoteDiscoveryBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = url;
}

RemoteDiscoveryBindingProxy::RemoteDiscoveryBindingProxy(soap_mode iomode)
{	this->soap = soap_new();
	this->own = true;
	RemoteDiscoveryBindingProxy_init(iomode, iomode);
}

RemoteDiscoveryBindingProxy::RemoteDiscoveryBindingProxy(const char *url, soap_mode iomode)
{	this->soap = soap_new();
	this->own = true;
	RemoteDiscoveryBindingProxy_init(iomode, iomode);
	soap_endpoint = url;
}

RemoteDiscoveryBindingProxy::RemoteDiscoveryBindingProxy(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->own = true;
	RemoteDiscoveryBindingProxy_init(imode, omode);
}

RemoteDiscoveryBindingProxy::~RemoteDiscoveryBindingProxy()
{	if (this->own)
		soap_free(this->soap);
}

void RemoteDiscoveryBindingProxy::RemoteDiscoveryBindingProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
	{"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL},
	{"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
	{"xmime", "http://www.w3.org/2005/05/xmlmime", NULL, NULL},
	{"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
	{"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
	{"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
	{"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
	{"wsrfr", "http://docs.oasis-open.org/wsrf/r-2", NULL, NULL},
	{"dn", "http://www.onvif.org/ver10/network/wsdl", NULL, NULL},
	{"tan", "http://www.onvif.org/ver20/analytics/wsdl", NULL, NULL},
	{"tds", "http://www.onvif.org/ver10/device/wsdl", NULL, NULL},
	{"tev", "http://www.onvif.org/ver10/events/wsdl", NULL, NULL},
	{"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
	{"trt", "http://www.onvif.org/ver10/media/wsdl", NULL, NULL},
	{"wsa", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL, NULL},
	{"wsd", "http://schemas.xmlsoap.org/ws/2005/04/discovery", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap_set_namespaces(this->soap, namespaces);
}

void RemoteDiscoveryBindingProxy::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void RemoteDiscoveryBindingProxy::reset()
{	destroy();
	soap_done(this->soap);
	soap_init(this->soap);
	RemoteDiscoveryBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void RemoteDiscoveryBindingProxy::soap_noheader()
{	this->soap->header = NULL;
}

void RemoteDiscoveryBindingProxy::soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, char *wsa__MessageID, wsa__Relationship *wsa__RelatesTo, wsa__EndpointReferenceType *wsa__From, wsa__EndpointReferenceType *wsa__ReplyTo, wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, wsd__AppSequenceType *wsd__AppSequence)
{	::soap_header(this->soap);
	this->soap->header->wsa5__MessageID = wsa5__MessageID;
	this->soap->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->soap->header->wsa5__From = wsa5__From;
	this->soap->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->soap->header->wsa5__FaultTo = wsa5__FaultTo;
	this->soap->header->wsa5__To = wsa5__To;
	this->soap->header->wsa5__Action = wsa5__Action;
	this->soap->header->chan__ChannelInstance = chan__ChannelInstance;
	this->soap->header->wsa__MessageID = wsa__MessageID;
	this->soap->header->wsa__RelatesTo = wsa__RelatesTo;
	this->soap->header->wsa__From = wsa__From;
	this->soap->header->wsa__ReplyTo = wsa__ReplyTo;
	this->soap->header->wsa__FaultTo = wsa__FaultTo;
	this->soap->header->wsa__To = wsa__To;
	this->soap->header->wsa__Action = wsa__Action;
	this->soap->header->wsd__AppSequence = wsd__AppSequence;
}

const SOAP_ENV__Header *RemoteDiscoveryBindingProxy::soap_header()
{	return this->soap->header;
}

const SOAP_ENV__Fault *RemoteDiscoveryBindingProxy::soap_fault()
{	return this->soap->fault;
}

const char *RemoteDiscoveryBindingProxy::soap_fault_string()
{	return *soap_faultstring(this->soap);
}

const char *RemoteDiscoveryBindingProxy::soap_fault_detail()
{	return *soap_faultdetail(this->soap);
}

int RemoteDiscoveryBindingProxy::soap_close_socket()
{	return soap_closesock(this->soap);
}

int RemoteDiscoveryBindingProxy::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

void RemoteDiscoveryBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void RemoteDiscoveryBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *RemoteDiscoveryBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

int RemoteDiscoveryBindingProxy::Hello(const char *endpoint, const char *soap_action, wsd__HelloType *dn__Hello, wsd__ResolveType *dn__HelloResponse)
{	struct soap *soap = this->soap;
	struct __dn__Hello soap_tmp___dn__Hello;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/network/wsdl/Hello";
	soap->encodingStyle = NULL;
	soap_tmp___dn__Hello.dn__Hello = dn__Hello;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___dn__Hello(soap, &soap_tmp___dn__Hello);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___dn__Hello(soap, &soap_tmp___dn__Hello, "-wsd:Hello", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___dn__Hello(soap, &soap_tmp___dn__Hello, "-wsd:Hello", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!dn__HelloResponse)
		return soap_closesock(soap);
	dn__HelloResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	dn__HelloResponse->soap_get(soap, "wsd:HelloResponse", "wsd:ResolveType");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int RemoteDiscoveryBindingProxy::Bye(const char *endpoint, const char *soap_action, wsd__ByeType *dn__Bye, wsd__ResolveType *dn__ByeResponse)
{	struct soap *soap = this->soap;
	struct __dn__Bye soap_tmp___dn__Bye;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/network/wsdl/Bye";
	soap->encodingStyle = NULL;
	soap_tmp___dn__Bye.dn__Bye = dn__Bye;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___dn__Bye(soap, &soap_tmp___dn__Bye);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___dn__Bye(soap, &soap_tmp___dn__Bye, "-wsd:Bye", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___dn__Bye(soap, &soap_tmp___dn__Bye, "-wsd:Bye", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!dn__ByeResponse)
		return soap_closesock(soap);
	dn__ByeResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	dn__ByeResponse->soap_get(soap, "wsd:ByeResponse", "wsd:ResolveType");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int RemoteDiscoveryBindingProxy::Probe(const char *endpoint, const char *soap_action, wsd__ProbeType *dn__Probe, wsd__ProbeMatchesType *dn__ProbeResponse)
{	struct soap *soap = this->soap;
	struct __dn__Probe soap_tmp___dn__Probe;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/network/wsdl/Probe";
	soap->encodingStyle = NULL;
	soap_tmp___dn__Probe.dn__Probe = dn__Probe;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___dn__Probe(soap, &soap_tmp___dn__Probe);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___dn__Probe(soap, &soap_tmp___dn__Probe, "-wsd:Probe", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___dn__Probe(soap, &soap_tmp___dn__Probe, "-wsd:Probe", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!dn__ProbeResponse)
		return soap_closesock(soap);
	dn__ProbeResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	dn__ProbeResponse->soap_get(soap, "wsd:ProbeMatches", "wsd:ProbeMatchesType");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
