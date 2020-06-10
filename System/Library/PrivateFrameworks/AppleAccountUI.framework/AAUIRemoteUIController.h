/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUIController.h>

@class NSString, NSURLRequest, NSHTTPURLResponse;

@interface AAUIRemoteUIController : RemoteUIController {

	NSString* _identifier;
	NSURLRequest* _currentRequest;
	NSHTTPURLResponse* _redirectResponse;

}

@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSURLRequest * currentRequest;                   //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * redirectResponse;              //@synthesize redirectResponse=_redirectResponse - In the implementation block
-(id)description;
-(id)init;
-(NSString *)identifier;
-(NSURLRequest *)currentRequest;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)loader:(id)arg1 didFinishLoadWithError:(id)arg2 ;
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setRedirectResponse:(NSHTTPURLResponse *)arg1 ;
-(id)loader:(id)arg1 connection:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 ;
-(void)_loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSHTTPURLResponse *)redirectResponse;
@end

