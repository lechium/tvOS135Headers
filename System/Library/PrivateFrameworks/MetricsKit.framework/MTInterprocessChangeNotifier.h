/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MTInterprocessChangeNotifier : NSObject {

	NSString* _identifier;
	int _token;

}
-(void)dealloc;
-(void)stop;
-(void)notify;
-(id)initWithIdentifier:(id)arg1 onChange:(/*^block*/id)arg2 ;
@end
