/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSITableDelegate;
@interface PSITable : NSObject {

	BOOL _finalizzeWasCalled;
	id<PSITableDelegate> _delegate;

}

@property (__weak,readonly) id<PSITableDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)clear;
-(id<PSITableDelegate>)delegate;
-(void)finalizze;
-(id)initWithDelegate:(id)arg1 searchable:(BOOL)arg2 writable:(BOOL)arg3 ;
@end

