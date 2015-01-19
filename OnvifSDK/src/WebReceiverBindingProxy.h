/* WebReceiverBindingProxy.h
   Generated by gSOAP 2.8.15 from web.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under ONE of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef WebReceiverBindingProxy_H
#define WebReceiverBindingProxy_H
#include "WebH.h"

class SOAP_CMAC ReceiverBindingProxy
{ public:
	struct soap *soap;
	bool own;
	/// Endpoint URL of service 'ReceiverBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Constructor
	ReceiverBindingProxy();
	/// Constructor to use/share an engine state
	ReceiverBindingProxy(struct soap*);
	/// Constructor with endpoint URL
	ReceiverBindingProxy(const char *url);
	/// Constructor with engine input+output mode control
	ReceiverBindingProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	ReceiverBindingProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	ReceiverBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~ReceiverBindingProxy();
	/// Initializer used by constructors
	virtual	void ReceiverBindingProxy_init(soap_mode imode, soap_mode omode);
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to default
	virtual	void reset();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, char *wsa__MessageID, wsa__Relationship *wsa__RelatesTo, wsa__EndpointReferenceType *wsa__From, wsa__EndpointReferenceType *wsa__ReplyTo, wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, wsd__AppSequenceType *wsd__AppSequence);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif

	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
	virtual	int GetServiceCapabilities(_trv__GetServiceCapabilities *trv__GetServiceCapabilities, _trv__GetServiceCapabilitiesResponse *trv__GetServiceCapabilitiesResponse) { return this->GetServiceCapabilities(NULL, NULL, trv__GetServiceCapabilities, trv__GetServiceCapabilitiesResponse); }
	virtual	int GetServiceCapabilities(const char *endpoint, const char *soap_action, _trv__GetServiceCapabilities *trv__GetServiceCapabilities, _trv__GetServiceCapabilitiesResponse *trv__GetServiceCapabilitiesResponse);

	/// Web service operation 'GetReceivers' (returns error code or SOAP_OK)
	virtual	int GetReceivers(_trv__GetReceivers *trv__GetReceivers, _trv__GetReceiversResponse *trv__GetReceiversResponse) { return this->GetReceivers(NULL, NULL, trv__GetReceivers, trv__GetReceiversResponse); }
	virtual	int GetReceivers(const char *endpoint, const char *soap_action, _trv__GetReceivers *trv__GetReceivers, _trv__GetReceiversResponse *trv__GetReceiversResponse);

	/// Web service operation 'GetReceiver' (returns error code or SOAP_OK)
	virtual	int GetReceiver(_trv__GetReceiver *trv__GetReceiver, _trv__GetReceiverResponse *trv__GetReceiverResponse) { return this->GetReceiver(NULL, NULL, trv__GetReceiver, trv__GetReceiverResponse); }
	virtual	int GetReceiver(const char *endpoint, const char *soap_action, _trv__GetReceiver *trv__GetReceiver, _trv__GetReceiverResponse *trv__GetReceiverResponse);

	/// Web service operation 'CreateReceiver' (returns error code or SOAP_OK)
	virtual	int CreateReceiver(_trv__CreateReceiver *trv__CreateReceiver, _trv__CreateReceiverResponse *trv__CreateReceiverResponse) { return this->CreateReceiver(NULL, NULL, trv__CreateReceiver, trv__CreateReceiverResponse); }
	virtual	int CreateReceiver(const char *endpoint, const char *soap_action, _trv__CreateReceiver *trv__CreateReceiver, _trv__CreateReceiverResponse *trv__CreateReceiverResponse);

	/// Web service operation 'DeleteReceiver' (returns error code or SOAP_OK)
	virtual	int DeleteReceiver(_trv__DeleteReceiver *trv__DeleteReceiver, _trv__DeleteReceiverResponse *trv__DeleteReceiverResponse) { return this->DeleteReceiver(NULL, NULL, trv__DeleteReceiver, trv__DeleteReceiverResponse); }
	virtual	int DeleteReceiver(const char *endpoint, const char *soap_action, _trv__DeleteReceiver *trv__DeleteReceiver, _trv__DeleteReceiverResponse *trv__DeleteReceiverResponse);

	/// Web service operation 'ConfigureReceiver' (returns error code or SOAP_OK)
	virtual	int ConfigureReceiver(_trv__ConfigureReceiver *trv__ConfigureReceiver, _trv__ConfigureReceiverResponse *trv__ConfigureReceiverResponse) { return this->ConfigureReceiver(NULL, NULL, trv__ConfigureReceiver, trv__ConfigureReceiverResponse); }
	virtual	int ConfigureReceiver(const char *endpoint, const char *soap_action, _trv__ConfigureReceiver *trv__ConfigureReceiver, _trv__ConfigureReceiverResponse *trv__ConfigureReceiverResponse);

	/// Web service operation 'SetReceiverMode' (returns error code or SOAP_OK)
	virtual	int SetReceiverMode(_trv__SetReceiverMode *trv__SetReceiverMode, _trv__SetReceiverModeResponse *trv__SetReceiverModeResponse) { return this->SetReceiverMode(NULL, NULL, trv__SetReceiverMode, trv__SetReceiverModeResponse); }
	virtual	int SetReceiverMode(const char *endpoint, const char *soap_action, _trv__SetReceiverMode *trv__SetReceiverMode, _trv__SetReceiverModeResponse *trv__SetReceiverModeResponse);

	/// Web service operation 'GetReceiverState' (returns error code or SOAP_OK)
	virtual	int GetReceiverState(_trv__GetReceiverState *trv__GetReceiverState, _trv__GetReceiverStateResponse *trv__GetReceiverStateResponse) { return this->GetReceiverState(NULL, NULL, trv__GetReceiverState, trv__GetReceiverStateResponse); }
	virtual	int GetReceiverState(const char *endpoint, const char *soap_action, _trv__GetReceiverState *trv__GetReceiverState, _trv__GetReceiverStateResponse *trv__GetReceiverStateResponse);
};
#endif
