/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSTextLocation;
@interface NSTextRange : NSObject {

	id<NSTextLocation> _location;
	id<NSTextLocation> _terminator;

}

@property (getter=isEmpty,readonly) BOOL empty; 
@property (readonly) id<NSTextLocation> location;                //@synthesize location=_location - In the implementation block
@property (readonly) id<NSTextLocation> terminator;              //@synthesize terminator=_terminator - In the implementation block
-(void)dealloc;
-(BOOL)isEmpty;
-(id)startLocation;
-(id<NSTextLocation>)location;
-(id)initWithLocation:(id)arg1 ;
-(id<NSTextLocation>)terminator;
-(id)textRangeByFormingUnionWithTextRange:(id)arg1 ;
-(BOOL)intersectsWithTextRange:(id)arg1 ;
-(BOOL)containsLocation:(id)arg1 ;
-(id)initWithLocation:(id)arg1 terminator:(id)arg2 ;
-(BOOL)isEqualToTextRange:(id)arg1 ;
-(id)textRangeByIntersectingWithTextRange:(id)arg1 ;
-(id)initWithStartLocation:(id)arg1 endLocation:(id)arg2 ;
-(id)endLocation;
@end

