/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;
@class NSMutableSet;

@interface _CNDistinctObservable : CNObservable {

	id<CNObservable> _observable;
	NSMutableSet* _previouslyObservedResults;

}
-(id)subscribe:(id)arg1 ;
-(BOOL)_resultIsDistinct:(id)arg1 ;
-(id)initWithObservable:(id)arg1 ;
@end

