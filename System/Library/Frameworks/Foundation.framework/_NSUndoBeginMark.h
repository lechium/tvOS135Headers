/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSUndoObject.h>

@interface _NSUndoBeginMark : _NSUndoObject {

	id _groupIdentifier;
	BOOL _isDiscardable;

}
-(id)description;
-(void)dealloc;
-(BOOL)isBeginMark;
-(BOOL)isDiscardable;
-(id)groupIdentifier;
-(void)setGroupIdentifier:(id)arg1 ;
-(void)setDiscardable:(BOOL)arg1 ;
@end

