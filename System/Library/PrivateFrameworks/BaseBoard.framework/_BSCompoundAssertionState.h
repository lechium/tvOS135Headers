/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSCompoundAssertionState.h>

@class NSSet;

@interface _BSCompoundAssertionState : NSObject <BSCompoundAssertionState> {

	BOOL _active;
	NSSet* _context;

}

@property (getter=isActive,readonly) BOOL active; 
@property (readonly) NSSet * context; 
-(id)description;
-(BOOL)isActive;
-(NSSet *)context;
-(void)setActive:(BOOL)arg1 ;
-(void)setContext:(NSSet *)arg1 ;
@end

