/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FLViewModel.h>

@class NSArray, NSSet, FLFollowUpController, FLItemChangeObserver, NSString;

@interface FLItemDetailViewModel : NSObject <FLViewModel> {

	NSArray* _originalItems;
	NSSet* _originalItemIdentifiers;
	FLFollowUpController* _controller;
	FLItemChangeObserver* _observer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(id)allPendingItems;
-(void)setItemChangeHandler:(/*^block*/id)arg1 ;
@end

