if (have_m) {
  if (have_p) {
    if (have_m_pml) {
      if (have_p_pml) {
        if (n3==1) {
          if (s2==1) {
            for (int i1=0; i1<n1; i1++)
              for (int i2=0, ind=i1*s1; i2<n2; i2++,ind+=1) {
                const double hm = the_f[ind] - the_f_pml[ind];
                const double hp = the_f_pml[ind];
                the_f_pml[ind] += decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                   - C_p[ind]*hp);
                the_f[ind] += (decay_m[ind]*((c*((f_m[ind]-f_m[ind-stride_m])))
                   - C_m[ind]*hm)) + decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                      - C_p[ind]*hp);
              }
          } else {
            for (int i1=0; i1<n1; i1++)
              for (int i2=0, ind=i1*s1; i2<n2; i2++,ind+=s2) {
                const double hm = the_f[ind] - the_f_pml[ind];
                const double hp = the_f_pml[ind];
                the_f_pml[ind] += decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                   - C_p[ind]*hp);
                the_f[ind] += (decay_m[ind]*((c*((f_m[ind]-f_m[ind-stride_m])))
                   - C_m[ind]*hm)) + decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                      - C_p[ind]*hp);
              }
          }
        } else {
          if (s3==1) {
            for (int i1=0; i1<n1; i1++)
              for (int i2=0; i2<n2; i2++)
                for (int i3=0, ind=i1*s1+i2*s2; i3<n3; i3++, ind+=1) {
                  const double hm = the_f[ind] - the_f_pml[ind];
                  const double hp = the_f_pml[ind];
                  the_f_pml[ind] += decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                     - C_p[ind]*hp);
                  the_f[ind] += (decay_m[ind]*((c*((f_m[ind]-f_m[ind-stride_m])))
                     - C_m[ind]*hm)) + decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                        - C_p[ind]*hp);
                }
          } else {
            for (int i1=0; i1<n1; i1++)
              for (int i2=0; i2<n2; i2++)
                for (int i3=0, ind=i1*s1+i2*s2; i3<n3; i3++, ind+=s3) {
                  const double hm = the_f[ind] - the_f_pml[ind];
                  const double hp = the_f_pml[ind];
                  the_f_pml[ind] += decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                     - C_p[ind]*hp);
                  the_f[ind] += (decay_m[ind]*((c*((f_m[ind]-f_m[ind-stride_m])))
                     - C_m[ind]*hm)) + decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                        - C_p[ind]*hp);
                }
          }
        }
      } else {
        if (n3==1) {
          if (s2==1) {
            for (int i1=0; i1<n1; i1++)
              for (int i2=0, ind=i1*s1; i2<n2; i2++,ind+=1) {
                const double hm = the_f_pml[ind];
                the_f_pml[ind] += decay_m[ind]*((c*((f_m[ind]-f_m[ind-stride_m])))
                   - C_m[ind]*hm);
                the_f[ind] += (decay_m[ind]*((c*((f_m[ind]-f_m[ind-stride_m])))
                   - C_m[ind]*hm)) + c*((f_p[ind-stride_p]-f_p[ind]));
              }
          } else {
            for (int i1=0; i1<n1; i1++)
              for (int i2=0, ind=i1*s1; i2<n2; i2++,ind+=s2) {
                const double hm = the_f_pml[ind];
                the_f_pml[ind] += decay_m[ind]*((c*((f_m[ind]-f_m[ind-stride_m])))
                   - C_m[ind]*hm);
                the_f[ind] += (decay_m[ind]*((c*((f_m[ind]-f_m[ind-stride_m])))
                   - C_m[ind]*hm)) + c*((f_p[ind-stride_p]-f_p[ind]));
              }
          }
        } else {
          if (s3==1) {
            for (int i1=0; i1<n1; i1++)
              for (int i2=0; i2<n2; i2++)
                for (int i3=0, ind=i1*s1+i2*s2; i3<n3; i3++, ind+=1) {
                  const double hm = the_f_pml[ind];
                  the_f_pml[ind] += decay_m[ind]*((c*((f_m[ind]-f_m[ind-stride_m])))
                     - C_m[ind]*hm);
                  the_f[ind] += (decay_m[ind]*((c*((f_m[ind]-f_m[ind-stride_m])))
                     - C_m[ind]*hm)) + c*((f_p[ind-stride_p]-f_p[ind]));
                }
          } else {
            for (int i1=0; i1<n1; i1++)
              for (int i2=0; i2<n2; i2++)
                for (int i3=0, ind=i1*s1+i2*s2; i3<n3; i3++, ind+=s3) {
                  const double hm = the_f_pml[ind];
                  the_f_pml[ind] += decay_m[ind]*((c*((f_m[ind]-f_m[ind-stride_m])))
                     - C_m[ind]*hm);
                  the_f[ind] += (decay_m[ind]*((c*((f_m[ind]-f_m[ind-stride_m])))
                     - C_m[ind]*hm)) + c*((f_p[ind-stride_p]-f_p[ind]));
                }
          }
        }
      }
    } else {
      if (have_p_pml) {
        if (n3==1) {
          if (s2==1) {
            for (int i1=0; i1<n1; i1++)
              for (int i2=0, ind=i1*s1; i2<n2; i2++,ind+=1) {
                const double hp = the_f_pml[ind];
                the_f_pml[ind] += decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                   - C_p[ind]*hp);
                the_f[ind] += (c*((f_m[ind]-f_m[ind-stride_m]))) + decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                   - C_p[ind]*hp);
              }
          } else {
            for (int i1=0; i1<n1; i1++)
              for (int i2=0, ind=i1*s1; i2<n2; i2++,ind+=s2) {
                const double hp = the_f_pml[ind];
                the_f_pml[ind] += decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                   - C_p[ind]*hp);
                the_f[ind] += (c*((f_m[ind]-f_m[ind-stride_m]))) + decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                   - C_p[ind]*hp);
              }
          }
        } else {
          if (s3==1) {
            for (int i1=0; i1<n1; i1++)
              for (int i2=0; i2<n2; i2++)
                for (int i3=0, ind=i1*s1+i2*s2; i3<n3; i3++, ind+=1) {
                  const double hp = the_f_pml[ind];
                  the_f_pml[ind] += decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                     - C_p[ind]*hp);
                  the_f[ind] += (c*((f_m[ind]-f_m[ind-stride_m]))) + decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                     - C_p[ind]*hp);
                }
          } else {
            for (int i1=0; i1<n1; i1++)
              for (int i2=0; i2<n2; i2++)
                for (int i3=0, ind=i1*s1+i2*s2; i3<n3; i3++, ind+=s3) {
                  const double hp = the_f_pml[ind];
                  the_f_pml[ind] += decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                     - C_p[ind]*hp);
                  the_f[ind] += (c*((f_m[ind]-f_m[ind-stride_m]))) + decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                     - C_p[ind]*hp);
                }
          }
        }
      } else {
        if (n3==1) {
          if (s2==1) {
            for (int i1=0; i1<n1; i1++)
              for (int i2=0, ind=i1*s1; i2<n2; i2++,ind+=1) {
                the_f[ind] += c*(((f_m[ind]-f_m[ind-stride_m])) + (f_p[ind-stride_p]-f_p[ind]));
              }
          } else {
            for (int i1=0; i1<n1; i1++)
              for (int i2=0, ind=i1*s1; i2<n2; i2++,ind+=s2) {
                the_f[ind] += c*(((f_m[ind]-f_m[ind-stride_m])) + (f_p[ind-stride_p]-f_p[ind]));
              }
          }
        } else {
          if (s3==1) {
            for (int i1=0; i1<n1; i1++)
              for (int i2=0; i2<n2; i2++)
                for (int i3=0, ind=i1*s1+i2*s2; i3<n3; i3++, ind+=1) {
                  the_f[ind] += c*(((f_m[ind]-f_m[ind-stride_m])) + (f_p[ind-stride_p]-f_p[ind]));
                }
          } else {
            for (int i1=0; i1<n1; i1++)
              for (int i2=0; i2<n2; i2++)
                for (int i3=0, ind=i1*s1+i2*s2; i3<n3; i3++, ind+=s3) {
                  the_f[ind] += c*(((f_m[ind]-f_m[ind-stride_m])) + (f_p[ind-stride_p]-f_p[ind]));
                }
          }
        }
      }
    }
  } else {
    if (have_m_pml) {
      if (n3==1) {
        if (s2==1) {
          for (int i1=0; i1<n1; i1++)
            for (int i2=0, ind=i1*s1; i2<n2; i2++,ind+=1) {
              const double hm = the_f[ind];
              the_f[ind] += decay_m[ind]*((c*((f_m[ind]-f_m[ind-stride_m])))
                 - C_m[ind]*hm);
            }
        } else {
          for (int i1=0; i1<n1; i1++)
            for (int i2=0, ind=i1*s1; i2<n2; i2++,ind+=s2) {
              const double hm = the_f[ind];
              the_f[ind] += decay_m[ind]*((c*((f_m[ind]-f_m[ind-stride_m])))
                 - C_m[ind]*hm);
            }
        }
      } else {
        if (s3==1) {
          for (int i1=0; i1<n1; i1++)
            for (int i2=0; i2<n2; i2++)
              for (int i3=0, ind=i1*s1+i2*s2; i3<n3; i3++, ind+=1) {
                const double hm = the_f[ind];
                the_f[ind] += decay_m[ind]*((c*((f_m[ind]-f_m[ind-stride_m])))
                   - C_m[ind]*hm);
              }
        } else {
          for (int i1=0; i1<n1; i1++)
            for (int i2=0; i2<n2; i2++)
              for (int i3=0, ind=i1*s1+i2*s2; i3<n3; i3++, ind+=s3) {
                const double hm = the_f[ind];
                the_f[ind] += decay_m[ind]*((c*((f_m[ind]-f_m[ind-stride_m])))
                   - C_m[ind]*hm);
              }
        }
      }
    } else {
      if (n3==1) {
        if (s2==1) {
          for (int i1=0; i1<n1; i1++)
            for (int i2=0, ind=i1*s1; i2<n2; i2++,ind+=1) {
              the_f[ind] += c*((f_m[ind]-f_m[ind-stride_m]));
            }
        } else {
          for (int i1=0; i1<n1; i1++)
            for (int i2=0, ind=i1*s1; i2<n2; i2++,ind+=s2) {
              the_f[ind] += c*((f_m[ind]-f_m[ind-stride_m]));
            }
        }
      } else {
        if (s3==1) {
          for (int i1=0; i1<n1; i1++)
            for (int i2=0; i2<n2; i2++)
              for (int i3=0, ind=i1*s1+i2*s2; i3<n3; i3++, ind+=1) {
                the_f[ind] += c*((f_m[ind]-f_m[ind-stride_m]));
              }
        } else {
          for (int i1=0; i1<n1; i1++)
            for (int i2=0; i2<n2; i2++)
              for (int i3=0, ind=i1*s1+i2*s2; i3<n3; i3++, ind+=s3) {
                the_f[ind] += c*((f_m[ind]-f_m[ind-stride_m]));
              }
        }
      }
    }
  }
} else {
  if (have_p_pml) {
    if (n3==1) {
      if (s2==1) {
        for (int i1=0; i1<n1; i1++)
          for (int i2=0, ind=i1*s1; i2<n2; i2++,ind+=1) {
            const double hp = the_f[ind];
            the_f[ind] += decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
               - C_p[ind]*hp);
          }
      } else {
        for (int i1=0; i1<n1; i1++)
          for (int i2=0, ind=i1*s1; i2<n2; i2++,ind+=s2) {
            const double hp = the_f[ind];
            the_f[ind] += decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
               - C_p[ind]*hp);
          }
      }
    } else {
      if (s3==1) {
        for (int i1=0; i1<n1; i1++)
          for (int i2=0; i2<n2; i2++)
            for (int i3=0, ind=i1*s1+i2*s2; i3<n3; i3++, ind+=1) {
              const double hp = the_f[ind];
              the_f[ind] += decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                 - C_p[ind]*hp);
            }
      } else {
        for (int i1=0; i1<n1; i1++)
          for (int i2=0; i2<n2; i2++)
            for (int i3=0, ind=i1*s1+i2*s2; i3<n3; i3++, ind+=s3) {
              const double hp = the_f[ind];
              the_f[ind] += decay_p[ind]*((c*((f_p[ind-stride_p]-f_p[ind])))
                 - C_p[ind]*hp);
            }
      }
    }
  } else {
    if (n3==1) {
      if (s2==1) {
        for (int i1=0; i1<n1; i1++)
          for (int i2=0, ind=i1*s1; i2<n2; i2++,ind+=1) {
            the_f[ind] += c*((f_p[ind-stride_p]-f_p[ind]));
          }
      } else {
        for (int i1=0; i1<n1; i1++)
          for (int i2=0, ind=i1*s1; i2<n2; i2++,ind+=s2) {
            the_f[ind] += c*((f_p[ind-stride_p]-f_p[ind]));
          }
      }
    } else {
      if (s3==1) {
        for (int i1=0; i1<n1; i1++)
          for (int i2=0; i2<n2; i2++)
            for (int i3=0, ind=i1*s1+i2*s2; i3<n3; i3++, ind+=1) {
              the_f[ind] += c*((f_p[ind-stride_p]-f_p[ind]));
            }
      } else {
        for (int i1=0; i1<n1; i1++)
          for (int i2=0; i2<n2; i2++)
            for (int i3=0, ind=i1*s1+i2*s2; i3<n3; i3++, ind+=s3) {
              the_f[ind] += c*((f_p[ind-stride_p]-f_p[ind]));
            }
      }
    }
  }
}