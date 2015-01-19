/* WebDeviceIOBindingService.h
   Generated by gSOAP 2.8.15 from web.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under ONE of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef WebDeviceIOBindingService_H
#define WebDeviceIOBindingService_H
#include "WebH.h"
class SOAP_CMAC DeviceIOBindingService
{ public:
	struct soap *soap;
	bool own;
	/// Constructor
	DeviceIOBindingService();
	/// Constructor to use/share an engine state
	DeviceIOBindingService(struct soap*);
	/// Constructor with engine input+output mode control
	DeviceIOBindingService(soap_mode iomode);
	/// Constructor with engine input and output mode control
	DeviceIOBindingService(soap_mode imode, soap_mode omode);
	/// Destructor, also frees all deserialized data
	virtual ~DeviceIOBindingService();
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to defaults
	virtual	void reset();
	/// Initializer used by constructor
	virtual	void DeviceIOBindingService_init(soap_mode imode, soap_mode omode);
	/// Create a copy
	virtual	DeviceIOBindingService *copy() SOAP_PURE_VIRTUAL;
	/// Close connection (normally automatic)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Return sender-related fault to sender
	virtual	int soap_senderfault(const char *string, const char *detailXML);
	/// Return sender-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Return receiver-related fault to sender
	virtual	int soap_receiverfault(const char *string, const char *detailXML);
	/// Return receiver-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML);
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
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, char *wsa__MessageID, wsa__Relationship *wsa__RelatesTo, wsa__EndpointReferenceType *wsa__From, wsa__EndpointReferenceType *wsa__ReplyTo, wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, wsd__AppSequenceType *wsd__AppSequence);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Run simple single-thread iterative service on port until a connection error occurs (returns error code or SOAP_OK), use this->bind_flag = SO_REUSEADDR to rebind for a rerun
	virtual	int run(int port);
	/// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET bind(const char *host, int port, int backlog);
	/// Accept next request (returns socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET accept();
#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
	/// Then accept SSL handshake, when SSL is used
	virtual	int ssl_accept();
#endif
	/// Serve this request (returns error code or SOAP_OK)
	virtual	int serve();
	/// Used by serve() to dispatch a request (returns error code or SOAP_OK)
	virtual	int dispatch();

	///
	/// Service operations (you should define these):
	/// Note: compile with -DWITH_PURE_VIRTUAL for pure virtual methods
	///

	/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
	virtual	int GetServiceCapabilities(_tmd__GetServiceCapabilities *tmd__GetServiceCapabilities, _tmd__GetServiceCapabilitiesResponse *tmd__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetRelayOutputOptions' (returns error code or SOAP_OK)
	virtual	int GetRelayOutputOptions(_tmd__GetRelayOutputOptions *tmd__GetRelayOutputOptions, _tmd__GetRelayOutputOptionsResponse *tmd__GetRelayOutputOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioSources' (returns error code or SOAP_OK)
	virtual	int GetAudioSources(_trt__GetAudioSources *trt__GetAudioSources, _trt__GetAudioSourcesResponse *trt__GetAudioSourcesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioOutputs' (returns error code or SOAP_OK)
	virtual	int GetAudioOutputs(_trt__GetAudioOutputs *trt__GetAudioOutputs, _trt__GetAudioOutputsResponse *trt__GetAudioOutputsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoSources' (returns error code or SOAP_OK)
	virtual	int GetVideoSources(_trt__GetVideoSources *trt__GetVideoSources, _trt__GetVideoSourcesResponse *trt__GetVideoSourcesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoOutputs' (returns error code or SOAP_OK)
	virtual	int GetVideoOutputs(_tmd__GetVideoOutputs *tmd__GetVideoOutputs, _tmd__GetVideoOutputsResponse *tmd__GetVideoOutputsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoSourceConfiguration' (returns error code or SOAP_OK)
	virtual	int GetVideoSourceConfiguration(_tmd__GetVideoSourceConfiguration *tmd__GetVideoSourceConfiguration, _tmd__GetVideoSourceConfigurationResponse *tmd__GetVideoSourceConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoOutputConfiguration' (returns error code or SOAP_OK)
	virtual	int GetVideoOutputConfiguration(_tmd__GetVideoOutputConfiguration *tmd__GetVideoOutputConfiguration, _tmd__GetVideoOutputConfigurationResponse *tmd__GetVideoOutputConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioSourceConfiguration' (returns error code or SOAP_OK)
	virtual	int GetAudioSourceConfiguration(_tmd__GetAudioSourceConfiguration *tmd__GetAudioSourceConfiguration, _tmd__GetAudioSourceConfigurationResponse *tmd__GetAudioSourceConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioOutputConfiguration' (returns error code or SOAP_OK)
	virtual	int GetAudioOutputConfiguration(_tmd__GetAudioOutputConfiguration *tmd__GetAudioOutputConfiguration, _tmd__GetAudioOutputConfigurationResponse *tmd__GetAudioOutputConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
	virtual	int SetVideoSourceConfiguration(_tmd__SetVideoSourceConfiguration *tmd__SetVideoSourceConfiguration, _tmd__SetVideoSourceConfigurationResponse *tmd__SetVideoSourceConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetVideoOutputConfiguration' (returns error code or SOAP_OK)
	virtual	int SetVideoOutputConfiguration(_tmd__SetVideoOutputConfiguration *tmd__SetVideoOutputConfiguration, _tmd__SetVideoOutputConfigurationResponse *tmd__SetVideoOutputConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
	virtual	int SetAudioSourceConfiguration(_tmd__SetAudioSourceConfiguration *tmd__SetAudioSourceConfiguration, _tmd__SetAudioSourceConfigurationResponse *tmd__SetAudioSourceConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
	virtual	int SetAudioOutputConfiguration(_tmd__SetAudioOutputConfiguration *tmd__SetAudioOutputConfiguration, _tmd__SetAudioOutputConfigurationResponse *tmd__SetAudioOutputConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetVideoSourceConfigurationOptions(_tmd__GetVideoSourceConfigurationOptions *tmd__GetVideoSourceConfigurationOptions, _tmd__GetVideoSourceConfigurationOptionsResponse *tmd__GetVideoSourceConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoOutputConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetVideoOutputConfigurationOptions(_tmd__GetVideoOutputConfigurationOptions *tmd__GetVideoOutputConfigurationOptions, _tmd__GetVideoOutputConfigurationOptionsResponse *tmd__GetVideoOutputConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetAudioSourceConfigurationOptions(_tmd__GetAudioSourceConfigurationOptions *tmd__GetAudioSourceConfigurationOptions, _tmd__GetAudioSourceConfigurationOptionsResponse *tmd__GetAudioSourceConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetAudioOutputConfigurationOptions(_tmd__GetAudioOutputConfigurationOptions *tmd__GetAudioOutputConfigurationOptions, _tmd__GetAudioOutputConfigurationOptionsResponse *tmd__GetAudioOutputConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetRelayOutputs' (returns error code or SOAP_OK)
	virtual	int GetRelayOutputs(_tds__GetRelayOutputs *tds__GetRelayOutputs, _tds__GetRelayOutputsResponse *tds__GetRelayOutputsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetRelayOutputSettings' (returns error code or SOAP_OK)
	virtual	int SetRelayOutputSettings(_tmd__SetRelayOutputSettings *tmd__SetRelayOutputSettings, _tmd__SetRelayOutputSettingsResponse *tmd__SetRelayOutputSettingsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetRelayOutputState' (returns error code or SOAP_OK)
	virtual	int SetRelayOutputState(_tds__SetRelayOutputState *tds__SetRelayOutputState, _tds__SetRelayOutputStateResponse *tds__SetRelayOutputStateResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetDigitalInputs' (returns error code or SOAP_OK)
	virtual	int GetDigitalInputs(_tmd__GetDigitalInputs *tmd__GetDigitalInputs, _tmd__GetDigitalInputsResponse *tmd__GetDigitalInputsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetSerialPorts' (returns error code or SOAP_OK)
	virtual	int GetSerialPorts(_tmd__GetSerialPorts *tmd__GetSerialPorts, _tmd__GetSerialPortsResponse *tmd__GetSerialPortsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetSerialPortConfiguration' (returns error code or SOAP_OK)
	virtual	int GetSerialPortConfiguration(_tmd__GetSerialPortConfiguration *tmd__GetSerialPortConfiguration, _tmd__GetSerialPortConfigurationResponse *tmd__GetSerialPortConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetSerialPortConfiguration' (returns error code or SOAP_OK)
	virtual	int SetSerialPortConfiguration(_tmd__SetSerialPortConfiguration *tmd__SetSerialPortConfiguration, _tmd__SetSerialPortConfigurationResponse *tmd__SetSerialPortConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetSerialPortConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetSerialPortConfigurationOptions(_tmd__GetSerialPortConfigurationOptions *tmd__GetSerialPortConfigurationOptions, _tmd__GetSerialPortConfigurationOptionsResponse *tmd__GetSerialPortConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SendReceiveSerialCommand' (returns error code or SOAP_OK)
	virtual	int SendReceiveSerialCommand(_tmd__SendReceiveSerialCommand *tmd__SendReceiveSerialCommand, _tmd__SendReceiveSerialCommandResponse *tmd__SendReceiveSerialCommandResponse) SOAP_PURE_VIRTUAL;
};
#endif
