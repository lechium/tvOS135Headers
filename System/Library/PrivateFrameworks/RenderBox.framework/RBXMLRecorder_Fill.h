/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RenderBox/RenderBox-Structs.h>
#import <RenderBox/RBFill.h>

@interface RBXMLRecorder_Fill : RBFill {

	vector<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> >, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > > >* _attributes;

}
-(void)setColor:(SCD_Struct_RB26)arg1 ;
-(void)set9PartRBImage:(SCD_Struct_RB28*)arg1 transform:(CGAffineTransform)arg2 destinationRect:(CGRect)arg3 capInsets:(SCD_Struct_RB3)arg4 repeat:(BOOL)arg5 interpolation:(int)arg6 tintColor:(SCD_Struct_RB26)arg7 flags:(unsigned)arg8 ;
-(void)setTiledRBImage:(SCD_Struct_RB28*)arg1 transform:(CGAffineTransform)arg2 sourceRect:(CGRect)arg3 interpolation:(int)arg4 tintColor:(SCD_Struct_RB26)arg5 flags:(unsigned)arg6 ;
-(void)setRBImage:(SCD_Struct_RB28*)arg1 transform:(CGAffineTransform)arg2 interpolation:(int)arg3 tintColor:(SCD_Struct_RB26)arg4 flags:(unsigned)arg5 ;
-(void)setConicGradientCenter:(CGPoint)arg1 angle:(double)arg2 stopCount:(long long)arg3 colors:(const SCD_Struct_RB26*)arg4 locations:(const double*)arg5 flags:(unsigned)arg6 ;
-(void)setRadialGradientCenter:(CGPoint)arg1 startRadius:(double)arg2 endRadius:(double)arg3 stopCount:(long long)arg4 colors:(const SCD_Struct_RB26*)arg5 locations:(const double*)arg6 flags:(unsigned)arg7 ;
-(void)setAxialGradientStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 stopCount:(long long)arg3 colors:(const SCD_Struct_RB26*)arg4 locations:(const double*)arg5 flags:(unsigned)arg6 ;
-(void)encodeTo:(Tree*)arg1 ;
@end

