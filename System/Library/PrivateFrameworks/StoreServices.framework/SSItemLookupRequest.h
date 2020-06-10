/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSMutableDictionary, NSDictionary, NSString;

@interface SSItemLookupRequest : SSRequest <SSXPCCoding> {

	NSMutableDictionary* _parameters;

}

@property (copy,readonly) NSDictionary * parameters; 
@property (assign,nonatomic) id<SSItemLookupRequestDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)start;
-(NSDictionary *)parameters;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_convertedValueForValue:(id)arg1 ;
-(id)_errorForStatusCode:(long long)arg1 ;
-(id)_copyItemsFromResponse:(id)arg1 expirationDate:(id)arg2 ;
-(void)startWithItemLookupBlock:(/*^block*/id)arg1 ;
-(void)setValue:(id)arg1 forParameter:(id)arg2 ;
-(id)valueForParameter:(id)arg1 ;
-(id)copyQueryStringParameters;
@end

