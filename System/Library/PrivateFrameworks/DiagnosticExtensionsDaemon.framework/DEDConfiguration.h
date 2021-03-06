/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCListener;

@interface DEDConfiguration : NSObject {

	NSXPCListener* _anonymousListener;

}

@property (retain) NSXPCListener * anonymousListener;              //@synthesize anonymousListener=_anonymousListener - In the implementation block
+(id)sharedInstance;
-(id)identifier;
-(NSXPCListener *)anonymousListener;
-(id)deviceClass;
-(id)deviceName;
-(id)machServiceName;
-(id)errorDomain;
-(unsigned long long)connectionType;
-(id)platform;
-(id)deviceColor;
-(id)deviceEnclosureColor;
-(id)deviceModel;
-(const char*)loggingSubsystem;
-(id)deviceProductType;
-(id)dedDirectory;
-(void)setAnonymousListener:(NSXPCListener *)arg1 ;
-(id)uniqueDeviceSpecifier;
-(id)classClusterAPIVersion;
-(id)sharedAnonymousListener;
-(void)invalidateTestListeners;
@end

