/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopyingNSObjectNSSecureCoding;
@class NSString, TIKeyboardTouchEvent, TIKeyboardCandidate;

@interface TIKeyboardInput : NSObject <NSSecureCoding> {

	SCD_Union_TI5 _flags;
	BOOL _backspace;
	NSString* _string;
	id<NSCopying><NSObject><NSSecureCoding> _object;
	TIKeyboardTouchEvent* _touchEvent;
	TIKeyboardCandidate* _acceptedCandidate;
	NSString* _inputManagerHint;
	long long _transliterationType;
	double _timestamp;

}

@property (nonatomic,copy) NSString * string;                                                                            //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) id<NSCopying><NSObject><NSSecureCoding> object;                                               //@synthesize object=_object - In the implementation block
@property (assign,getter=isBackspace,nonatomic) BOOL backspace;                                                          //@synthesize backspace=_backspace - In the implementation block
@property (assign,getter=isUppercase,nonatomic) BOOL uppercase; 
@property (assign,getter=isAutoshifted,nonatomic) BOOL autoshifted; 
@property (assign,getter=isPopupVariant,nonatomic) BOOL popupVariant; 
@property (assign,getter=isMultitap,nonatomic) BOOL multitap; 
@property (assign,getter=isFlick,nonatomic) BOOL flick; 
@property (assign,getter=isGesture,nonatomic) BOOL gesture; 
@property (assign,getter=isSynthesizedByAcceptingCandidate,nonatomic) BOOL synthesizedByAcceptingCandidate; 
@property (assign,getter=isDoubleSpace,nonatomic) BOOL doubleSpace; 
@property (assign,getter=isRapidDelete,nonatomic) BOOL rapidDelete; 
@property (assign,getter=isShiftDown,nonatomic) BOOL shiftDown; 
@property (nonatomic,retain) TIKeyboardTouchEvent * touchEvent;                                                          //@synthesize touchEvent=_touchEvent - In the implementation block
@property (assign,nonatomic) long long transliterationType;                                                              //@synthesize transliterationType=_transliterationType - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * acceptedCandidate;                                                    //@synthesize acceptedCandidate=_acceptedCandidate - In the implementation block
@property (nonatomic,copy) NSString * inputManagerHint;                                                                  //@synthesize inputManagerHint=_inputManagerHint - In the implementation block
@property (assign,nonatomic) double timestamp;                                                                           //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(NSString *)string;
-(id<NSCopying><NSObject><NSSecureCoding>)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(void)setObject:(id<NSCopying><NSObject><NSSecureCoding>)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(TIKeyboardTouchEvent *)touchEvent;
-(void)setTouchEvent:(TIKeyboardTouchEvent *)arg1 ;
-(TIKeyboardCandidate *)acceptedCandidate;
-(void)setAcceptedCandidate:(TIKeyboardCandidate *)arg1 ;
-(BOOL)isUppercase;
-(void)setUppercase:(BOOL)arg1 ;
-(BOOL)isAutoshifted;
-(void)setAutoshifted:(BOOL)arg1 ;
-(BOOL)isPopupVariant;
-(void)setPopupVariant:(BOOL)arg1 ;
-(BOOL)isMultitap;
-(void)setMultitap:(BOOL)arg1 ;
-(BOOL)isFlick;
-(void)setFlick:(BOOL)arg1 ;
-(BOOL)isGesture;
-(void)setGesture:(BOOL)arg1 ;
-(BOOL)isSynthesizedByAcceptingCandidate;
-(void)setSynthesizedByAcceptingCandidate:(BOOL)arg1 ;
-(BOOL)isDoubleSpace;
-(void)setDoubleSpace:(BOOL)arg1 ;
-(BOOL)isRapidDelete;
-(void)setRapidDelete:(BOOL)arg1 ;
-(BOOL)isShiftDown;
-(void)setShiftDown:(BOOL)arg1 ;
-(BOOL)isBackspace;
-(void)setBackspace:(BOOL)arg1 ;
-(NSString *)inputManagerHint;
-(void)setInputManagerHint:(NSString *)arg1 ;
-(long long)transliterationType;
-(void)setTransliterationType:(long long)arg1 ;
@end

