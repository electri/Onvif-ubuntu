/* WebRemoteDiscoveryBindingService.cpp
   Generated by gSOAP 2.8.15 from web.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under ONE of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "WebRemoteDiscoveryBindingService.h"

RemoteDiscoveryBindingService::RemoteDiscoveryBindingService()
{	this->soap = soap_new();
	this->own = true;
	RemoteDiscoveryBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

RemoteDiscoveryBindingService::RemoteDiscoveryBindingService(struct soap *_soap)
{	this->soap = _soap;
	this->own = false;
	RemoteDiscoveryBindingService_init(_soap->imode, _soap->omode);
}

RemoteDiscoveryBindingService::RemoteDiscoveryBindingService(soap_mode iomode)
{	this->soap = soap_new();
	this->own = true;
	RemoteDiscoveryBindingService_init(iomode, iomode);
}

RemoteDiscoveryBindingService::RemoteDiscoveryBindingService(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->own = true;
	RemoteDiscoveryBindingService_init(imode, omode);
}

RemoteDiscoveryBindingService::~RemoteDiscoveryBindingService()
{	if (this->own)
		soap_free(this->soap);
}

void RemoteDiscoveryBindingService::RemoteDiscoveryBindingService_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
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
	{"tls", "http://www.onvif.org/ver10/display/wsdl", NULL, NULL},
	{"tmd", "http://www.onvif.org/ver10/deviceIO/wsdl", NULL, NULL},
	{"trc", "http://www.onvif.org/ver10/recording/wsdl", NULL, NULL},
	{"trp", "http://www.onvif.org/ver10/replay/wsdl", NULL, NULL},
	{"trt", "http://www.onvif.org/ver10/media/wsdl", NULL, NULL},
	{"trv", "http://www.onvif.org/ver10/receiver/wsdl", NULL, NULL},
	{"tse", "http://www.onvif.org/ver10/search/wsdl", NULL, NULL},
	{"wsa", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL, NULL},
	{"wsd", "http://schemas.xmlsoap.org/ws/2005/04/discovery", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap_set_namespaces(this->soap, namespaces);
};

void RemoteDiscoveryBindingService::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void RemoteDiscoveryBindingService::reset()
{	destroy();
	soap_done(this->soap);
	soap_init(this->soap);
	RemoteDiscoveryBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
RemoteDiscoveryBindingService *RemoteDiscoveryBindingService::copy()
{	RemoteDiscoveryBindingService *dup = SOAP_NEW_COPY(RemoteDiscoveryBindingService);
	if (dup)
		soap_copy_context(dup->soap, this->soap);
	return dup;
}
#endif

int RemoteDiscoveryBindingService::soap_close_socket()
{	return soap_closesock(this->soap);
}

int RemoteDiscoveryBindingService::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

int RemoteDiscoveryBindingService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this->soap, string, detailXML);
}

int RemoteDiscoveryBindingService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

int RemoteDiscoveryBindingService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this->soap, string, detailXML);
}

int RemoteDiscoveryBindingService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

void RemoteDiscoveryBindingService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void RemoteDiscoveryBindingService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *RemoteDiscoveryBindingService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

void RemoteDiscoveryBindingService::soap_noheader()
{	this->soap->header = NULL;
}

void RemoteDiscoveryBindingService::soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, char *wsa__MessageID, wsa__Relationship *wsa__RelatesTo, wsa__EndpointReferenceType *wsa__From, wsa__EndpointReferenceType *wsa__ReplyTo, wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, wsd__AppSequenceType *wsd__AppSequence)
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

const SOAP_ENV__Header *RemoteDiscoveryBindingService::soap_header()
{	return this->soap->header;
}

int RemoteDiscoveryBindingService::run(int port)
{	if (soap_valid_socket(this->soap->master) || soap_valid_socket(bind(NULL, port, 100)))
	{	for (;;)
		{	if (!soap_valid_socket(accept()) || serve())
				return this->soap->error;
			soap_destroy(this->soap);
			soap_end(this->soap);
		}
	}
	else
		return this->soap->error;
	return SOAP_OK;
}

SOAP_SOCKET RemoteDiscoveryBindingService::bind(const char *host, int port, int backlog)
{	return soap_bind(this->soap, host, port, backlog);
}

SOAP_SOCKET RemoteDiscoveryBindingService::accept()
{	return soap_accept(this->soap);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int RemoteDiscoveryBindingService::ssl_accept()
{	return soap_ssl_accept(this->soap);
}
#endif

int RemoteDiscoveryBindingService::serve()
{
#ifndef WITH_FASTCGI
	unsigned int k = this->soap->max_keep_alive;
#endif
	do
	{

#ifndef WITH_FASTCGI
		if (this->soap->max_keep_alive > 0 && !--k)
			this->soap->keep_alive = 0;
#endif

		if (soap_begin_serve(this->soap))
		{	if (this->soap->error >= SOAP_STOP)
				continue;
			return this->soap->error;
		}
		if (dispatch() || (this->soap->fserveloop && this->soap->fserveloop(this->soap)))
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this->soap);
#else
			return soap_send_fault(this->soap);
#endif
		}

#ifdef WITH_FASTCGI
		soap_destroy(this->soap);
		soap_end(this->soap);
	} while (1);
#else
	} while (this->soap->keep_alive);
#endif
	return SOAP_OK;
}

static int serve___dn__Hello(RemoteDiscoveryBindingService*);
static int serve___dn__Bye(RemoteDiscoveryBindingService*);
static int serve___dn__Probe(RemoteDiscoveryBindingService*);

int RemoteDiscoveryBindingService::dispatch()
{	RemoteDiscoveryBindingService_init(this->soap->imode, this->soap->omode);
	soap_peek_element(this->soap);
	if ((!this->soap->action && !soap_match_tag(this->soap, this->soap->tag, "wsd:Hello")) || (this->soap->action && !strcmp(this->soap->action, "http://www.onvif.org/ver10/network/wsdl/Hello")))
		return serve___dn__Hello(this);
	if ((!this->soap->action && !soap_match_tag(this->soap, this->soap->tag, "wsd:Bye")) || (this->soap->action && !strcmp(this->soap->action, "http://www.onvif.org/ver10/network/wsdl/Bye")))
		return serve___dn__Bye(this);
	if ((!this->soap->action && !soap_match_tag(this->soap, this->soap->tag, "wsd:Probe")) || (this->soap->action && !strcmp(this->soap->action, "http://www.onvif.org/ver10/network/wsdl/Probe")))
		return serve___dn__Probe(this);
	return this->soap->error = SOAP_NO_METHOD;
}

static int serve___dn__Hello(RemoteDiscoveryBindingService *service)
{	struct soap *soap = service->soap;
	struct __dn__Hello soap_tmp___dn__Hello;
	wsd__ResolveType dn__HelloResponse;
	dn__HelloResponse.soap_default(soap);
	soap_default___dn__Hello(soap, &soap_tmp___dn__Hello);
	soap->encodingStyle = NULL;
	if (!soap_get___dn__Hello(soap, &soap_tmp___dn__Hello, "-wsd:Hello", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->Hello(soap_tmp___dn__Hello.dn__Hello, &dn__HelloResponse);
	if (soap->error)
		return soap->error;
	soap_serializeheader(soap);
	dn__HelloResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || dn__HelloResponse.soap_put(soap, "wsd:HelloResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || dn__HelloResponse.soap_put(soap, "wsd:HelloResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___dn__Bye(RemoteDiscoveryBindingService *service)
{	struct soap *soap = service->soap;
	struct __dn__Bye soap_tmp___dn__Bye;
	wsd__ResolveType dn__ByeResponse;
	dn__ByeResponse.soap_default(soap);
	soap_default___dn__Bye(soap, &soap_tmp___dn__Bye);
	soap->encodingStyle = NULL;
	if (!soap_get___dn__Bye(soap, &soap_tmp___dn__Bye, "-wsd:Bye", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->Bye(soap_tmp___dn__Bye.dn__Bye, &dn__ByeResponse);
	if (soap->error)
		return soap->error;
	soap_serializeheader(soap);
	dn__ByeResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || dn__ByeResponse.soap_put(soap, "wsd:ByeResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || dn__ByeResponse.soap_put(soap, "wsd:ByeResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___dn__Probe(RemoteDiscoveryBindingService *service)
{	struct soap *soap = service->soap;
	struct __dn__Probe soap_tmp___dn__Probe;
	wsd__ProbeMatchesType dn__ProbeResponse;
	dn__ProbeResponse.soap_default(soap);
	soap_default___dn__Probe(soap, &soap_tmp___dn__Probe);
	soap->encodingStyle = NULL;
	if (!soap_get___dn__Probe(soap, &soap_tmp___dn__Probe, "-wsd:Probe", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->Probe(soap_tmp___dn__Probe.dn__Probe, &dn__ProbeResponse);
	if (soap->error)
		return soap->error;
	soap_serializeheader(soap);
	dn__ProbeResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || dn__ProbeResponse.soap_put(soap, "wsd:ProbeResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || dn__ProbeResponse.soap_put(soap, "wsd:ProbeResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */
