/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/ACFGeneralMessageProtocol.h>
#import <libobjc.A.dylib/ACFErrorReportingProtocol.h>

@class NSMutableDictionary, NSString;

@interface ACFMessage : NSObject <ACFGeneralMessageProtocol, ACFErrorReportingProtocol> {

	NSMutableDictionary* _mutableInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)message;
+(id)messageWithInfo:(id)arg1 ;
+(id)messageWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)identifier;
-(id)error;
-(void)setError:(id)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(id)info;
-(long long)errorCode;
-(id)errorMessage;
-(void)setInfo:(id)arg1 ;
-(void)clearError;
-(id)mutableInfo;
-(int)senderProcessID;
-(void)setSenderProcessID:(int)arg1 ;
-(id)senderProcessName;
-(void)setSenderProcessName:(id)arg1 ;
-(id)senderPortName;
-(void)setSenderPortName:(id)arg1 ;
@end
