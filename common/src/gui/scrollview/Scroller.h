// Scroller.h

#ifndef SCROLLER_H
#define SCROLLER_H

class Scrollable;

class Scroller {
 public:
								Scroller();
	virtual						~Scroller();

			void				SetScrollTarget(Scrollable* target);
			Scrollable*			ScrollTarget() const;

			void				SetDataRect(BRect dataRect);
			BRect				DataRect() const;

			void				SetScrollOffset(BPoint offset);
			BPoint				ScrollOffset() const;

			void				SetVisibleSize(float width, float height);
			BRect				VisibleBounds() const;
			BRect				VisibleRect() const;

protected:
	virtual	void				DataRectChanged(BRect oldDataRect,
												BRect newDataRect);
	virtual	void				ScrollOffsetChanged(BPoint oldOffset,
													BPoint newOffset);
	virtual	void				VisibleSizeChanged(float oldWidth,
												   float oldHeight,
												   float newWidth,
												   float newHeight);
	virtual	void				ScrollTargetChanged(Scrollable* oldTarget,
													Scrollable* newTarget);

 protected:
			Scrollable*			fScrollTarget;

	friend class Scrollable;
};


#endif	// SCROLLER_H
